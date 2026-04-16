@echo off
setlocal

set "VCVARS="

rem Check VS2026 editions in order: Enterprise, Professional, Community, BuildTools
for %%E in (Enterprise Professional Community BuildTools) do (
    if not defined VCVARS (
        if exist "C:\Program Files\Microsoft Visual Studio\18\%%E\VC\Auxiliary\Build\vcvars64.bat" (
            set "VCVARS=C:\Program Files\Microsoft Visual Studio\18\%%E\VC\Auxiliary\Build\vcvars64.bat"
        )
    )
)

rem Also check Program Files (x86) for BuildTools
if not defined VCVARS (
    if exist "C:\Program Files (x86)\Microsoft Visual Studio\18\BuildTools\VC\Auxiliary\Build\vcvars64.bat" (
        set "VCVARS=C:\Program Files (x86)\Microsoft Visual Studio\18\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
    )
)

if not defined VCVARS (
    echo ERROR: Visual Studio 2026 not found.
    echo Checked editions: Enterprise, Professional, Community, BuildTools
    exit /b 1
)

echo Using: %VCVARS%
endlocal & call "%VCVARS%"

C:\msys64\msys2_shell.cmd -defterm -no-start -ucrt64 -here -use-full-path
rem C:\msys64\msys2_shell.cmd -defterm -no-start -mingw64 -here -use-full-path
