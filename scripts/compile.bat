@echo off

echo.
echo    Compiling...

MinGW32-make -f .\scripts\Makefile

if %ERRORLEVEL% == 0 (
    echo    Compiled project successfully
    echo.
) else (
    echo.
    echo    An error occurred. Could not compile
    echo.   
)

@REM Pause
@REM cls