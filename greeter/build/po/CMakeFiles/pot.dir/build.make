# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nick/work/Enso-OS/greeter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nick/work/Enso-OS/greeter/build

# Utility rule file for pot.

# Include the progress variables for this target.
include po/CMakeFiles/pot.dir/progress.make

pot: po/CMakeFiles/pot.dir/build.make
	cd /home/nick/work/Enso-OS/greeter/po && /usr/bin/xgettext -d pantheon-greeter -o /home/nick/work/Enso-OS/greeter/po/pantheon-greeter.pot --add-comments="/" --keyword="_" --keyword="N_" --keyword="C_:1c,2" --keyword="NC_:1c,2" --keyword="ngettext:1,2" --keyword="Q_:1g" --from-code=UTF-8 -LC# ../src/UserListActor.vala ../src/UserList.vala ../src/LoginOptions/UserLogin.vala ../src/LoginOptions/LoginOption.vala ../src/LoginOptions/ManualLogin.vala ../src/LoginOptions/GuestLogin.vala ../src/Interfaces/LoginMask.vala ../src/Interfaces/Credentials.vala ../src/PantheonGreeter.vala ../src/SettingsDaemon.vala ../src/Gateways/DummyGateway.vala ../src/Gateways/LoginGateway.vala ../src/Gateways/LightDMGateway.vala ../src/Widgets/PasswordCredentials.vala ../src/Widgets/PowerLabel.vala ../src/Widgets/Wallpaper.vala ../src/Widgets/TimeLabel.vala ../src/Widgets/CredentialsArea.vala ../src/Widgets/LoginBox.vala ../src/Widgets/LoginButtonCredentials.vala ../src/Widgets/FingerprintCredentials.vala
.PHONY : pot

# Rule to build all files generated by this target.
po/CMakeFiles/pot.dir/build: pot

.PHONY : po/CMakeFiles/pot.dir/build

po/CMakeFiles/pot.dir/clean:
	cd /home/nick/work/Enso-OS/greeter/build/po && $(CMAKE_COMMAND) -P CMakeFiles/pot.dir/cmake_clean.cmake
.PHONY : po/CMakeFiles/pot.dir/clean

po/CMakeFiles/pot.dir/depend:
	cd /home/nick/work/Enso-OS/greeter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nick/work/Enso-OS/greeter /home/nick/work/Enso-OS/greeter/po /home/nick/work/Enso-OS/greeter/build /home/nick/work/Enso-OS/greeter/build/po /home/nick/work/Enso-OS/greeter/build/po/CMakeFiles/pot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : po/CMakeFiles/pot.dir/depend
