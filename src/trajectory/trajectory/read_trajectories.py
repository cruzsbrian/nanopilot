file = open("foot_positions.txt", "r")

foot_pos = []

for line in file:
	arr = line.split()
	foot_pos.append(arr)
	
print(foot_pos)
file.close()
