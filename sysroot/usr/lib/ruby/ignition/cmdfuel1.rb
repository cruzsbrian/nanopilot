#!/usr/bin/ruby

# Copyright (C) 2017 Open Source Robotics Foundation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

require 'ffi'
require 'optparse'

# Constants.
COMMON_OPTIONS =
  "  -h [ --help ]              Print this help message.                   \n"\
  "  -v [ --verbose ] LEVEL     Set verbosity level 0-4                    \n"\
  "                                                                        \n"\

COMMANDS = { 'fuel' =>
  "Manage simulation resources.                                            \n"\
  "  ign fuel [action] [options]                                           \n"\
  "                                                                        \n"\
  "Available Actions:                                                      \n"\
  "  list                     List available models                        \n"\
  "  locate                   Print location on disk, downloading if needed\n"\
  "  pull                     Download a model                             \n"\
  "  push                     Upload a model                               \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n" +
  COMMON_OPTIONS
}

SUBCOMMANDS = { 'list' =>
  "List simulation resources                                               \n"\
  "  ign fuel list [options]                                               \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  --owner OWNER            Owner of the resource                        \n"\
  "  --name NAME              Name of the resource                         \n"\
  "  --url URL                URL of a server the resource comes from      \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n" +
  COMMON_OPTIONS,
                'locate' =>
  "Locate where a resource is on disk, fetching if necessary               \n"\
  "  ign fuel locate [options]                                             \n"\
  "                                                                        \n"\
  "Required Flags:                                                         \n"\
  "  --name NAME              Name of the resource                         \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  --owner OWNER            Owner of the resource                        \n"\
  "  --url URL                URL of a server the resource comes from      \n" +
  COMMON_OPTIONS,
                'push' =>
  "Upload simulation resources                                             \n"\
  "  ign fuel push [options] --url URL --owner OWNER --name NAME --path PATH\n"\
  "                                                                        \n"\
  "Required Flags:                                                         \n"\
  "  --owner OWNER            Owner of the resource                        \n"\
  "  --name NAME              Name of the resource                         \n"\
  "  --url URL             URL of a server the resource comes from         \n"\
  "  --path PATH           PATH to resource on disk                        \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n" +
  COMMON_OPTIONS,
                'pull' =>
  "Download simulation resources                                           \n"\
  "  ign fuel pull [options] --url URL --owner OWNER --name NAME           \n"\
  "                                                                        \n"\
  "Required Flags:                                                         \n"\
  "  --owner OWNER            Owner of the resource                        \n"\
  "  --name NAME              Name of the resource                         \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  --url URL             URL of a server the resource comes from         \n" +
  COMMON_OPTIONS,
                'hello' =>
  "check if library is working                                             \n"\
  "Available Options:                                                      \n" +
  COMMON_OPTIONS,
}

#
# Class for accessing C functions
#
module FuelClient
  extend FFI::Library
  ffi_lib ""
  attach_function :helloWorld, [], :void
  attach_function :listModels, [:string, :string, :string], :void
  attach_function :pushModel, [:string, :string, :string, :string], :void
  attach_function :pullModel, [:string, :string, :string], :void
  attach_function :locateModel, [:string, :string, :string], :void
  attach_function :verbosity, [:int], :void
end

#
# Class for the Ignition Fuel command line tools.
#
class Cmd
  #
  # Constructor.
  #
  def initialize
  end

  #
  # Return a structure describing the options.
  #
  def parse(args)
    options = {
      'url' => '',
      'path' => '',
      'owner' => '',
      'name' => '',
      'verbose' => 0,
    }

    usage = COMMANDS[args[0]]

    if !SUBCOMMANDS.key?(args[1])
      puts usage
      exit -1
    else
      usage = SUBCOMMANDS[args[1]]
    end

    opt_parser = OptionParser.new do |opts|
      opts.banner = usage

      opts.on('-h', '--help') do
        puts usage
        exit
      end
      opts.on('--url SERVER') do |server|
        options['url'] = server
      end
      opts.on('--owner OWNER') do |owner|
        options['owner'] = owner
      end
      opts.on('--name NAME') do |name|
        options['name'] = name
      end
      opts.on('--path NAME') do |path|
        options['path'] = path
      end
      opts.on('-v LEVEL', '--verbose LEVEL', OptionParser::DecimalInteger) do |level|
        options['verbose'] = level
      end
    end # opt_parser do


    opt_parser.parse!(args)

    options['command'] = args[0]
    options['subcommand'] = args[1]

    # check required flags
    case options['subcommand']
    when 'list'
      # no required flags
    when 'locate'
      if options['name'].length == 0
        puts usage
        exit -1
      end
    when 'pull'
      if options['owner'].length == 0 or
        options['name'].length == 0
        puts usage
        exit -1
      end
    when 'push'
      if options['url'].length == 0 or
        options['owner'].length == 0 or
        options['name'].length == 0 or
        options['path'].length == 0
        puts usage
        exit -1
      end
    end

    options
  end # parse()

  def execute(args)
    options = parse(args)

    FuelClient.verbosity options['verbose']

    begin
      case options['subcommand']
      when 'list'
        FuelClient.listModels options['name'], options['owner'], options['url']
      when 'locate'
        FuelClient.locateModel options['name'], options['owner'], options['url']
      when 'pull'
        FuelClient.pullModel options['name'], options['owner'], options['url']
      when 'push'
        FuelClient.pushModel options['name'], options['owner'], options['url'],
          options['path']
      when 'hello'
        FuelClient.helloWorld
      end
    rescue
      puts "Library error: Problem running [#{options['command']}]() "\
           "from libignition-fuel_tools1.so."
    end # begin
  end # execute
end # class
