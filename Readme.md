This repository illustrates and issue I observed with Conan 2.0 running package verification test for Windows 32 images. This is a consistent issue for 32B Windows packages.

The repository defines a static library `simple.lib` that provides a function `void simple(void)` that uses `printf` to display a message.

The conan `test_package` functionality invokes `simple()` and then prints out it's own message.

This works for 64B compiles/deploys. It prints the messages.

This does not work for 32B compiles/deploys. The test passes, but the messages are not printed.

If I run the executable from the command line it is printed.

**Environment:**
* Windows 11 Pro N
* VS Studio 2022 Community 17.8.4
* cmake 3.23.1
* git 2.42.0.windows.2
* conan 2.0.17
* python 3.12.1

The issue has been observed running the commands from the windows `cmd` prompt as well as from a `git bash` windows.

This [Logs.md](./Logs.md) file shows the results.
