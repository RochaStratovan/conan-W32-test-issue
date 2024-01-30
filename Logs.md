# Contents

[[_TOC_]]

# 64 Bit Works

**Ensure a clean start**

```
C:\Users\rocha\Desktop\JRR>git clean -xfd .
```

**conan install**

```
C:\Users\rocha\Desktop\JRR>conan install .

======== Input profiles ========
Profile host:
[settings]
arch=x86_64
build_type=Release
compiler=msvc
compiler.cppstd=14
compiler.runtime=dynamic
compiler.runtime_type=Release
compiler.version=193
os=Windows

Profile build:
[settings]
arch=x86_64
build_type=Release
compiler=msvc
compiler.cppstd=14
compiler.runtime=dynamic
compiler.runtime_type=Release
compiler.version=193
os=Windows


======== Computing dependency graph ========
Graph root
    conanfile.py (simple/1.0): C:\Users\rocha\Desktop\JRR\conanfile.py

======== Computing necessary packages ========

======== Installing packages ========

======== Finalizing install (deploy, generators) ========
conanfile.py (simple/1.0): Calling generate()
conanfile.py (simple/1.0): Generators folder: C:\Users\rocha\Desktop\JRR\build\generators
conanfile.py (simple/1.0): WARN: Toolchain: Ignoring fPIC option defined for Windows
conanfile.py (simple/1.0): CMakeToolchain generated: conan_toolchain.cmake
conanfile.py (simple/1.0): Preset 'conan-default' added to CMakePresets.json. Invoke it manually using 'cmake --preset conan-default' if using CMake>=3.23
conanfile.py (simple/1.0): If your CMake version is not compatible with CMakePresets (<3.23) call cmake like: 'cmake <path> -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=C:\Users\rocha\Desktop\JRR\build\generators\conan_toolchain.cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW'
conanfile.py (simple/1.0): CMakeToolchain generated: CMakePresets.json
conanfile.py (simple/1.0): CMakeToolchain generated: ..\..\CMakeUserPresets.json
conanfile.py (simple/1.0): Generating aggregated env files
conanfile.py (simple/1.0): Generated aggregated env files: ['conanbuild.bat', 'conanrun.bat']
Install finished successfully
```

<br>

**conan build**

```
C:\Users\rocha\Desktop\JRR>conan build .

======== Input profiles ========
Profile host:
[settings]
arch=x86_64
build_type=Release
compiler=msvc
compiler.cppstd=14
compiler.runtime=dynamic
compiler.runtime_type=Release
compiler.version=193
os=Windows

Profile build:
[settings]
arch=x86_64
build_type=Release
compiler=msvc
compiler.cppstd=14
compiler.runtime=dynamic
compiler.runtime_type=Release
compiler.version=193
os=Windows


======== Computing dependency graph ========
Graph root
    conanfile.py (simple/1.0): C:\Users\rocha\Desktop\JRR\conanfile.py

======== Computing necessary packages ========

======== Installing packages ========

======== Installing packages ========

======== Finalizing install (deploy, generators) ========
conanfile.py (simple/1.0): Calling generate()
conanfile.py (simple/1.0): Generators folder: C:\Users\rocha\Desktop\JRR\build\generators
conanfile.py (simple/1.0): WARN: Toolchain: Ignoring fPIC option defined for Windows
conanfile.py (simple/1.0): CMakeToolchain generated: conan_toolchain.cmake
conanfile.py (simple/1.0): Preset 'conan-default' added to CMakePresets.json. Invoke it manually using 'cmake --preset conan-default' if using CMake>=3.23
conanfile.py (simple/1.0): If your CMake version is not compatible with CMakePresets (<3.23) call cmake like: 'cmake <path> -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=C:\Users\rocha\Desktop\JRR\build\generators\conan_toolchain.cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW'
conanfile.py (simple/1.0): CMakeToolchain generated: CMakePresets.json
conanfile.py (simple/1.0): CMakeToolchain generated: ..\..\CMakeUserPresets.json
conanfile.py (simple/1.0): Generating aggregated env files
conanfile.py (simple/1.0): Generated aggregated env files: ['conanbuild.bat', 'conanrun.bat']

======== Calling build() ========
conanfile.py (simple/1.0): Calling build()
conanfile.py (simple/1.0): Running CMake.configure()
conanfile.py (simple/1.0): RUN: cmake -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE="C:/Users/rocha/Desktop/JRR/build/generators/conan_toolchain.cmake" -DCMAKE_INSTALL_PREFIX="C:/Users/rocha/Desktop/JRR" -DCMAKE_POLICY_DEFAULT_CMP0091="NEW" "C:\Users\rocha\Desktop\JRR"
-- Using Conan toolchain: C:/Users/rocha/Desktop/JRR/build/generators/conan_toolchain.cmake
-- Conan toolchain: CMAKE_GENERATOR_TOOLSET=v143
-- Conan toolchain: C++ Standard 14 with extensions OFF
-- Conan toolchain: Setting BUILD_SHARED_LIBS = OFF
-- Selecting Windows SDK version 10.0.22000.0 to target Windows 10.0.22631.
-- The CXX compiler identification is MSVC 19.38.33134.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.38.33130/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/rocha/Desktop/JRR/build

conanfile.py (simple/1.0): Running CMake.build()
conanfile.py (simple/1.0): RUN: cmake --build "C:\Users\rocha\Desktop\JRR\build" --config Release
MSBuild version 17.8.3+195e7f5a3 for .NET Framework

  Checking Build System
  Building Custom Rule C:/Users/rocha/Desktop/JRR/CMakeLists.txt
  simple.cpp
  simple.vcxproj -> C:\Users\rocha\Desktop\JRR\build\Release\simple.lib
  Building Custom Rule C:/Users/rocha/Desktop/JRR/CMakeLists.txt
```

<br>

**conan export-pkg**

```
C:\Users\rocha\Desktop\JRR>conan export-pkg .

======== Exporting recipe to the cache ========
simple/1.0: Exporting package recipe: C:\Users\rocha\Desktop\JRR\conanfile.py
simple/1.0: Copied 1 '.py' file: conanfile.py
simple/1.0: Copied 1 '.txt' file: CMakeLists.txt
simple/1.0: Copied 1 '.h' file: simple.h
simple/1.0: Copied 1 '.cpp' file: simple.cpp
simple/1.0: Exported to cache folder: C:\Users\rocha\.conan2\p\simplf6968c583b6e7\e
simple/1.0: Exported: simple/1.0#e5f4444da571b01dca863ac39068f122 (2024-01-30 17:41:38 UTC)

======== Computing dependency graph ========
Graph root
    conanfile.py (simple/1.0): C:\Users\rocha\Desktop\JRR\conanfile.py

======== Computing necessary packages ========

======== Installing packages ========
conanfile.py (simple/1.0): Calling generate()
conanfile.py (simple/1.0): Generators folder: C:\Users\rocha\Desktop\JRR\build\generators
conanfile.py (simple/1.0): WARN: Toolchain: Ignoring fPIC option defined for Windows
conanfile.py (simple/1.0): CMakeToolchain generated: conan_toolchain.cmake
conanfile.py (simple/1.0): Preset 'conan-default' added to CMakePresets.json. Invoke it manually using 'cmake --preset conan-default' if using CMake>=3.23
conanfile.py (simple/1.0): If your CMake version is not compatible with CMakePresets (<3.23) call cmake like: 'cmake <path> -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=C:\Users\rocha\Desktop\JRR\build\generators\conan_toolchain.cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW'
conanfile.py (simple/1.0): CMakeToolchain generated: CMakePresets.json
conanfile.py (simple/1.0): CMakeToolchain generated: ..\..\CMakeUserPresets.json
conanfile.py (simple/1.0): Generating aggregated env files
conanfile.py (simple/1.0): Generated aggregated env files: ['conanbuild.bat', 'conanrun.bat']

======== Exporting recipe and package to the cache ========
conanfile.py (simple/1.0): Exporting binary from user folder to Conan cache
conanfile.py (simple/1.0): Packaging to f0ee00ca1b44c81d4c54f9c349a10b30c079e783
conanfile.py (simple/1.0): Generating the package
conanfile.py (simple/1.0): Packaging in folder C:\Users\rocha\.conan2\p\b\simpl073cc5b7bfaa3\p
conanfile.py (simple/1.0): Calling package()
conanfile.py (simple/1.0): Running CMake.install()
conanfile.py (simple/1.0): RUN: cmake --install "C:\Users\rocha\Desktop\JRR\build" --config Release --prefix "C:/Users/rocha/.conan2/p/b/simpl073cc5b7bfaa3/p"
-- Installing: C:/Users/rocha/.conan2/p/b/simpl073cc5b7bfaa3/p/lib/simple.lib
-- Installing: C:/Users/rocha/.conan2/p/b/simpl073cc5b7bfaa3/p/include/simple.h

conanfile.py (simple/1.0): package(): Packaged 1 '.h' file: simple.h
conanfile.py (simple/1.0): package(): Packaged 1 '.lib' file: simple.lib
conanfile.py (simple/1.0): Created package revision d5b759fa20c469e58062ffde03c80cdf
conanfile.py (simple/1.0): Package 'f0ee00ca1b44c81d4c54f9c349a10b30c079e783' created
conanfile.py (simple/1.0): Full package reference: simple/1.0#e5f4444da571b01dca863ac39068f122:f0ee00ca1b44c81d4c54f9c349a10b30c079e783#d5b759fa20c469e58062ffde03c80cdf
conanfile.py (simple/1.0): Package folder C:\Users\rocha\.conan2\p\b\simpl073cc5b7bfaa3\p
conanfile.py (simple/1.0): Exported package binary

======== Launching test_package ========

======== Computing dependency graph ========
Graph root
    simple/1.0 (test package): C:\Users\rocha\Desktop\JRR\test_package\conanfile.py
Requirements
    simple/1.0#e5f4444da571b01dca863ac39068f122 - Cache

======== Computing necessary packages ========
Requirements
    simple/1.0#e5f4444da571b01dca863ac39068f122:f0ee00ca1b44c81d4c54f9c349a10b30c079e783#d5b759fa20c469e58062ffde03c80cdf - Cache

======== Installing packages ========
simple/1.0: Already installed! (1 of 1)

======== Testing the package ========
Removing previously existing 'test_package' build folder: C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86_64-14-release
simple/1.0 (test package): Test package build: build\msvc-193-x86_64-14-release
simple/1.0 (test package): Test package build folder: C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86_64-14-release
simple/1.0 (test package): Writing generators to C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86_64-14-release\generators
simple/1.0 (test package): Generator 'CMakeDeps' calling 'generate()'
simple/1.0 (test package): CMakeDeps necessary find_package() and targets for your CMakeLists.txt
    find_package(simple)
    target_link_libraries(... simple::simple)
simple/1.0 (test package): Generator 'CMakeToolchain' calling 'generate()'
simple/1.0 (test package): CMakeToolchain generated: conan_toolchain.cmake
simple/1.0 (test package): CMakeToolchain generated: CMakePresets.json
simple/1.0 (test package): CMakeToolchain generated: ..\..\..\CMakeUserPresets.json
simple/1.0 (test package): Generating aggregated env files
simple/1.0 (test package): Generated aggregated env files: ['conanbuild.bat', 'conanrun.bat']

======== Testing the package: Building ========
simple/1.0 (test package): Calling build()
simple/1.0 (test package): Running CMake.configure()
simple/1.0 (test package): RUN: cmake -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE="C:/Users/rocha/Desktop/JRR/test_package/build/msvc-193-x86_64-14-release/generators/conan_toolchain.cmake" -DCMAKE_INSTALL_PREFIX="C:/Users/rocha/Desktop/JRR/test_package" -DCMAKE_POLICY_DEFAULT_CMP0091="NEW" "C:\Users\rocha\Desktop\JRR\test_package"
-- Using Conan toolchain: C:/Users/rocha/Desktop/JRR/test_package/build/msvc-193-x86_64-14-release/generators/conan_toolchain.cmake
-- Conan toolchain: CMAKE_GENERATOR_TOOLSET=v143
-- Conan toolchain: C++ Standard 14 with extensions OFF
-- Selecting Windows SDK version 10.0.22000.0 to target Windows 10.0.22631.
-- The CXX compiler identification is MSVC 19.38.33134.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.38.33130/bin/Hostx64/x64/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Conan: Target declared 'simple::simple'
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/rocha/Desktop/JRR/test_package/build/msvc-193-x86_64-14-release

simple/1.0 (test package): Running CMake.build()
simple/1.0 (test package): RUN: cmake --build "C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86_64-14-release" --config Release
MSBuild version 17.8.3+195e7f5a3 for .NET Framework

  Checking Build System
  Building Custom Rule C:/Users/rocha/Desktop/JRR/test_package/CMakeLists.txt
  example.cpp
  example.vcxproj -> C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86_64-14-release\Relea
  se\example.exe
  Building Custom Rule C:/Users/rocha/Desktop/JRR/test_package/CMakeLists.txt


======== Testing the package: Executing test ========
simple/1.0 (test package): Running test()
simple/1.0 (test package): RUN: Release\example
This is the simple output
We are now done.



C:\Users\rocha\Desktop\JRR>
```

Notice the the output is correctly displayed for `Testing the package`

<br>

<br>

# 32 Bit Fails

**Start with a clean workspace**

```
C:\Users\rocha\Desktop\JRR>git clean -xfd .
Removing #Readme.md#
Removing .#Readme.md
Removing CMakeUserPresets.json
Removing Logs.md
Removing Logs.md~
Removing Readme.md~
Removing build/
Removing test_package/CMakeUserPresets.json
Removing test_package/build/
```

<br>

**conan install**

```
C:\Users\rocha\Desktop\JRR>conan install . -s arch=x86

======== Input profiles ========
Profile host:
[settings]
arch=x86
build_type=Release
compiler=msvc
compiler.cppstd=14
compiler.runtime=dynamic
compiler.runtime_type=Release
compiler.version=193
os=Windows

Profile build:
[settings]
arch=x86_64
build_type=Release
compiler=msvc
compiler.cppstd=14
compiler.runtime=dynamic
compiler.runtime_type=Release
compiler.version=193
os=Windows


======== Computing dependency graph ========
Graph root
    conanfile.py (simple/1.0): C:\Users\rocha\Desktop\JRR\conanfile.py

======== Computing necessary packages ========

======== Installing packages ========

======== Finalizing install (deploy, generators) ========
conanfile.py (simple/1.0): Calling generate()
conanfile.py (simple/1.0): Generators folder: C:\Users\rocha\Desktop\JRR\build\generators
conanfile.py (simple/1.0): WARN: Toolchain: Ignoring fPIC option defined for Windows
conanfile.py (simple/1.0): CMakeToolchain generated: conan_toolchain.cmake
conanfile.py (simple/1.0): Preset 'conan-default' added to CMakePresets.json. Invoke it manually using 'cmake --preset conan-default' if using CMake>=3.23
conanfile.py (simple/1.0): If your CMake version is not compatible with CMakePresets (<3.23) call cmake like: 'cmake <path> -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=C:\Users\rocha\Desktop\JRR\build\generators\conan_toolchain.cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW'
conanfile.py (simple/1.0): CMakeToolchain generated: CMakePresets.json
conanfile.py (simple/1.0): CMakeToolchain generated: ..\..\CMakeUserPresets.json
conanfile.py (simple/1.0): Generating aggregated env files
conanfile.py (simple/1.0): Generated aggregated env files: ['conanbuild.bat', 'conanrun.bat']
Install finished successfully
```

<br>

**conan build**

```
C:\Users\rocha\Desktop\JRR>conan build . -s arch=x86

======== Input profiles ========
Profile host:
[settings]
arch=x86
build_type=Release
compiler=msvc
compiler.cppstd=14
compiler.runtime=dynamic
compiler.runtime_type=Release
compiler.version=193
os=Windows

Profile build:
[settings]
arch=x86_64
build_type=Release
compiler=msvc
compiler.cppstd=14
compiler.runtime=dynamic
compiler.runtime_type=Release
compiler.version=193
os=Windows


======== Computing dependency graph ========
Graph root
    conanfile.py (simple/1.0): C:\Users\rocha\Desktop\JRR\conanfile.py

======== Computing necessary packages ========

======== Installing packages ========

======== Installing packages ========

======== Finalizing install (deploy, generators) ========
conanfile.py (simple/1.0): Calling generate()
conanfile.py (simple/1.0): Generators folder: C:\Users\rocha\Desktop\JRR\build\generators
conanfile.py (simple/1.0): WARN: Toolchain: Ignoring fPIC option defined for Windows
conanfile.py (simple/1.0): CMakeToolchain generated: conan_toolchain.cmake
conanfile.py (simple/1.0): Preset 'conan-default' added to CMakePresets.json. Invoke it manually using 'cmake --preset conan-default' if using CMake>=3.23
conanfile.py (simple/1.0): If your CMake version is not compatible with CMakePresets (<3.23) call cmake like: 'cmake <path> -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=C:\Users\rocha\Desktop\JRR\build\generators\conan_toolchain.cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW'
conanfile.py (simple/1.0): CMakeToolchain generated: CMakePresets.json
conanfile.py (simple/1.0): CMakeToolchain generated: ..\..\CMakeUserPresets.json
conanfile.py (simple/1.0): Generating aggregated env files
conanfile.py (simple/1.0): Generated aggregated env files: ['conanbuild.bat', 'conanrun.bat']

======== Calling build() ========
conanfile.py (simple/1.0): Calling build()
conanfile.py (simple/1.0): Running CMake.configure()
conanfile.py (simple/1.0): RUN: cmake -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE="C:/Users/rocha/Desktop/JRR/build/generators/conan_toolchain.cmake" -DCMAKE_INSTALL_PREFIX="C:/Users/rocha/Desktop/JRR" -DCMAKE_POLICY_DEFAULT_CMP0091="NEW" "C:\Users\rocha\Desktop\JRR"
-- Using Conan toolchain: C:/Users/rocha/Desktop/JRR/build/generators/conan_toolchain.cmake
-- Conan toolchain: CMAKE_GENERATOR_TOOLSET=v143
-- Conan toolchain: C++ Standard 14 with extensions OFF
-- Conan toolchain: Setting BUILD_SHARED_LIBS = OFF
-- Selecting Windows SDK version 10.0.22000.0 to target Windows 10.0.22631.
-- The CXX compiler identification is MSVC 19.38.33134.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.38.33130/bin/Hostx64/x86/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/rocha/Desktop/JRR/build

conanfile.py (simple/1.0): Running CMake.build()
conanfile.py (simple/1.0): RUN: cmake --build "C:\Users\rocha\Desktop\JRR\build" --config Release
MSBuild version 17.8.3+195e7f5a3 for .NET Framework

  Checking Build System
  Building Custom Rule C:/Users/rocha/Desktop/JRR/CMakeLists.txt
  simple.cpp
  simple.vcxproj -> C:\Users\rocha\Desktop\JRR\build\Release\simple.lib
  Building Custom Rule C:/Users/rocha/Desktop/JRR/CMakeLists.txt
```

<br>

**conan export-pkg**

```
C:\Users\rocha\Desktop\JRR>conan export-pkg . -s arch=x86

======== Exporting recipe to the cache ========
simple/1.0: Exporting package recipe: C:\Users\rocha\Desktop\JRR\conanfile.py
simple/1.0: Copied 1 '.py' file: conanfile.py
simple/1.0: Copied 1 '.txt' file: CMakeLists.txt
simple/1.0: Copied 1 '.h' file: simple.h
simple/1.0: Copied 1 '.cpp' file: simple.cpp
simple/1.0: Exported to cache folder: C:\Users\rocha\.conan2\p\simplf6968c583b6e7\e
simple/1.0: Exported: simple/1.0#e5f4444da571b01dca863ac39068f122 (2024-01-30 17:45:28 UTC)

======== Computing dependency graph ========
Graph root
    conanfile.py (simple/1.0): C:\Users\rocha\Desktop\JRR\conanfile.py

======== Computing necessary packages ========

======== Installing packages ========
conanfile.py (simple/1.0): Calling generate()
conanfile.py (simple/1.0): Generators folder: C:\Users\rocha\Desktop\JRR\build\generators
conanfile.py (simple/1.0): WARN: Toolchain: Ignoring fPIC option defined for Windows
conanfile.py (simple/1.0): CMakeToolchain generated: conan_toolchain.cmake
conanfile.py (simple/1.0): Preset 'conan-default' added to CMakePresets.json. Invoke it manually using 'cmake --preset conan-default' if using CMake>=3.23
conanfile.py (simple/1.0): If your CMake version is not compatible with CMakePresets (<3.23) call cmake like: 'cmake <path> -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE=C:\Users\rocha\Desktop\JRR\build\generators\conan_toolchain.cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW'
conanfile.py (simple/1.0): CMakeToolchain generated: CMakePresets.json
conanfile.py (simple/1.0): CMakeToolchain generated: ..\..\CMakeUserPresets.json
conanfile.py (simple/1.0): Generating aggregated env files
conanfile.py (simple/1.0): Generated aggregated env files: ['conanbuild.bat', 'conanrun.bat']

======== Exporting recipe and package to the cache ========
conanfile.py (simple/1.0): Exporting binary from user folder to Conan cache
conanfile.py (simple/1.0): Packaging to c1ea7558549fd5a2643669940130a94163e0afae
conanfile.py (simple/1.0): Generating the package
conanfile.py (simple/1.0): Packaging in folder C:\Users\rocha\.conan2\p\b\simpla0009936e7f72\p
conanfile.py (simple/1.0): Calling package()
conanfile.py (simple/1.0): Running CMake.install()
conanfile.py (simple/1.0): RUN: cmake --install "C:\Users\rocha\Desktop\JRR\build" --config Release --prefix "C:/Users/rocha/.conan2/p/b/simpla0009936e7f72/p"
-- Installing: C:/Users/rocha/.conan2/p/b/simpla0009936e7f72/p/lib/simple.lib
-- Installing: C:/Users/rocha/.conan2/p/b/simpla0009936e7f72/p/include/simple.h

conanfile.py (simple/1.0): package(): Packaged 1 '.h' file: simple.h
conanfile.py (simple/1.0): package(): Packaged 1 '.lib' file: simple.lib
conanfile.py (simple/1.0): Created package revision 032fd30269e455170448a1a8ea19c109
conanfile.py (simple/1.0): Package 'c1ea7558549fd5a2643669940130a94163e0afae' created
conanfile.py (simple/1.0): Full package reference: simple/1.0#e5f4444da571b01dca863ac39068f122:c1ea7558549fd5a2643669940130a94163e0afae#032fd30269e455170448a1a8ea19c109
conanfile.py (simple/1.0): Package folder C:\Users\rocha\.conan2\p\b\simpla0009936e7f72\p
conanfile.py (simple/1.0): Exported package binary

======== Launching test_package ========

======== Computing dependency graph ========
Graph root
    simple/1.0 (test package): C:\Users\rocha\Desktop\JRR\test_package\conanfile.py
Requirements
    simple/1.0#e5f4444da571b01dca863ac39068f122 - Cache

======== Computing necessary packages ========
Requirements
    simple/1.0#e5f4444da571b01dca863ac39068f122:c1ea7558549fd5a2643669940130a94163e0afae#032fd30269e455170448a1a8ea19c109 - Cache

======== Installing packages ========
simple/1.0: Already installed! (1 of 1)

======== Testing the package ========
Removing previously existing 'test_package' build folder: C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86-14-release
simple/1.0 (test package): Test package build: build\msvc-193-x86-14-release
simple/1.0 (test package): Test package build folder: C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86-14-release
simple/1.0 (test package): Writing generators to C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86-14-release\generators
simple/1.0 (test package): Generator 'CMakeDeps' calling 'generate()'
simple/1.0 (test package): CMakeDeps necessary find_package() and targets for your CMakeLists.txt
    find_package(simple)
    target_link_libraries(... simple::simple)
simple/1.0 (test package): Generator 'CMakeToolchain' calling 'generate()'
simple/1.0 (test package): CMakeToolchain generated: conan_toolchain.cmake
simple/1.0 (test package): CMakeToolchain generated: CMakePresets.json
simple/1.0 (test package): CMakeToolchain generated: ..\..\..\CMakeUserPresets.json
simple/1.0 (test package): Generating aggregated env files
simple/1.0 (test package): Generated aggregated env files: ['conanbuild.bat', 'conanrun.bat']

======== Testing the package: Building ========
simple/1.0 (test package): Calling build()
simple/1.0 (test package): Running CMake.configure()
simple/1.0 (test package): RUN: cmake -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE="C:/Users/rocha/Desktop/JRR/test_package/build/msvc-193-x86-14-release/generators/conan_toolchain.cmake" -DCMAKE_INSTALL_PREFIX="C:/Users/rocha/Desktop/JRR/test_package" -DCMAKE_POLICY_DEFAULT_CMP0091="NEW" "C:\Users\rocha\Desktop\JRR\test_package"
-- Using Conan toolchain: C:/Users/rocha/Desktop/JRR/test_package/build/msvc-193-x86-14-release/generators/conan_toolchain.cmake
-- Conan toolchain: CMAKE_GENERATOR_TOOLSET=v143
-- Conan toolchain: C++ Standard 14 with extensions OFF
-- Selecting Windows SDK version 10.0.22000.0 to target Windows 10.0.22631.
-- The CXX compiler identification is MSVC 19.38.33134.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.38.33130/bin/Hostx64/x86/cl.exe - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Conan: Target declared 'simple::simple'
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/rocha/Desktop/JRR/test_package/build/msvc-193-x86-14-release

simple/1.0 (test package): Running CMake.build()
simple/1.0 (test package): RUN: cmake --build "C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86-14-release" --config Release
MSBuild version 17.8.3+195e7f5a3 for .NET Framework

  Checking Build System
  Building Custom Rule C:/Users/rocha/Desktop/JRR/test_package/CMakeLists.txt
  example.cpp
  example.vcxproj -> C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86-14-release\Release\
  example.exe
  Building Custom Rule C:/Users/rocha/Desktop/JRR/test_package/CMakeLists.txt


======== Testing the package: Executing test ========
simple/1.0 (test package): Running test()

C:\Users\rocha\Desktop\JRR>
```

Notice that we are test output is missing.

<br>

**Manual run works**

```
C:\Users\rocha\Desktop\JRR>C:\Users\rocha\Desktop\JRR\test_package\build\msvc-193-x86-14-release\Release\example.exe
This is the simple output
We are now done.


C:\Users\rocha\Desktop\JRR>
```
