# libiconv for Windows
----------------------
![MSBuild](https://github.com/pffang/libiconv-for-Windows/actions/workflows/msbuild.yml/badge.svg)

The `libiconv` library for Windows (via the Microsoft Visual C/C++ Compiler (MSVC)) based on [GNU libiconv][1].

Solution file updated to Visual Studio 2022 **only**.

## Version

`libiconv` library version `1.18-eed6782`

# How To Build

1. Download and install [Visual Studio 2022 Community Edition][4].
   - If applicable, use another accompanying edition for Visual Studio 2022 (e.g. Professional, Enterprise, etc.).
   - **(Required)** Ensure to select the "*Desktop development with C++*" component from the "*Visual Studio Installer*" to get all the x86 and x64 build tools.
2. **(Optional)** For compiling ARM64 builds, ensure to also install the "*MSVC v### - VS 2022 C++ ARM64 build tools (latest)*" individual component from the *Visual Studio Installer* (where '###' is the current version of MSVC).
   - The "*Visual Studio Installer*" can be launched by typing this name into the Windows search on Windows 11.
3. Clone this repository and open up the `Liblconv.sln` project file in Visual Studio.
4. Select the architecture (e.g. `ARM64`, `x64`, `x86`) and configuration (e.g. `Release`, `ReleaseStatic`, `Debug`, `DebugStatic`) to build for.
5. From the "*Build*" menu, click on "*Build Solution*."
6. Wait for the build to finish.
   When finished, ensure that the build was successful.

# Supported Builds

<table>
    <thead>
        <tr>
            <th><center>Architecture(s)</center></th>
            <th><center>Configuration(s)</center></th>
            <th><center>Comment(s)</center></th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td rowspan=4><center>Win32</center></td>
            <td><center><code>Release</code></center></td>
            <td>The release dynamic linked-library (DLL) and static library (LIB).</td>
        </tr>
        <tr>
            <td><center><code>ReleaseStatic</code></center></td>
            <td>The release static library (LIB) only.</td>
        </tr>
        <tr>
            <td><center><code>Debug</code></center></td>
            <td>The debug dynamic linked-library (DLL) and static library (LIB).</td>
        </tr>
        <tr>
            <td><center><code>DebugStatic</code></center></td>
            <td>The debug static library (LIB) only.</td>
        </tr>
    </tbody>
    <tbody>
        <tr>
            <td rowspan=4><center>x64</center></td>
            <td><center><code>Release</code></center></td>
            <td>The release dynamic linked-library (DLL) and static library (LIB).</td>
        </tr>
        <tr>
            <td><center><code>ReleaseStatic</code></center></td>
            <td>The release static library (LIB) only.</td>
        </tr>
        <tr>
            <td><center><code>Debug</code></center></td>
            <td>The debug dynamic linked-library (DLL) and static library (LIB).</td>
        </tr>
        <tr>
            <td><center><code>DebugStatic</code></center></td>
            <td>The debug static library (LIB) only.</td>
        </tr>
    </tbody>
    <tbody>
        <tr>
            <td rowspan=4><center>ARM64</center></td>
            <td><center><code>Release</code></center></td>
            <td>The release dynamic linked-library (DLL) and static library (LIB).</td>
        </tr>
        <tr>
            <td><center><code>ReleaseStatic</code></center></td>
            <td>The release static library (LIB) only.</td>
        </tr>
        <tr>
            <td><center><code>Debug</code></center></td>
            <td>The debug dynamic linked-library (DLL) and static library (LIB).</td>
        </tr>
        <tr>
            <td><center><code>DebugStatic</code></center></td>
            <td>The debug static library (LIB) only.</td>
        </tr>
    </tbody>
</table>

----------------------
## Licensing

Refer to the GNU license provided by `libiconv` [LGPL3.0][3].

[1]: https://www.gnu.org/software/libiconv
[2]: http://www.codeproject.com/Articles/302012/How-to-Build-libiconv-with-Microsoft-Visual-Studio
[3]: https://www.gnu.org/licenses/lgpl.html
[4]: https://visualstudio.microsoft.com/vs/community/
