DIR=/usr/lib/linux-u-boot-next-nanopiair_5.65_armhf
write_uboot_platform () 
{ 
    dd if=/dev/zero of=$2 bs=1k count=1023 seek=1 status=noxfer > /dev/null 2>&1;
    dd if=$1/u-boot-sunxi-with-spl.bin of=$2 bs=1024 seek=8 status=noxfer > /dev/null 2>&1
}
write_uboot_platform_mtd () 
{ 
    dd if=$1/u-boot.flash of=$2 status=noxfer > /dev/null 2>&1
}
setup_write_uboot_platform () 
{ 
    if grep -q "ubootpart" /proc/cmdline; then
        local tmp=$(cat /proc/cmdline);
        tmp="${tmp##*ubootpart=}";
        tmp="${tmp%% *}";
        [[ -n $tmp ]] && local part=$(findfs PARTUUID=$tmp 2>/dev/null);
        [[ -n $part ]] && local dev=$(lsblk -n -o PKNAME $part 2>/dev/null);
        [[ -n $dev ]] && DEVICE="/dev/$dev";
    else
        if [[ -f /var/lib/armbian/force_search_uboot ]]; then
            for dev in $(lsblk -d -n -p -o NAME);
            do
                if grep -q 'eGON.BT0' <(dd if=$dev bs=32 skip=256 count=1 status=none); then
                    echo "SPL signature found on $dev" 1>&2;
                    DEVICE=$dev;
                    break;
                fi;
            done;
        fi;
    fi
}
