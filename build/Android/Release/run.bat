:: This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.35.8\Targets\Android\run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    "C:\Program Files\Fuse\uno.exe" open -a"Android Studio" "%~dp0bimcast"
    exit /b %ERRORLEVEL%
)

"C:\Program Files\Fuse\uno.exe" launch-apk "%~dp0bimcast.apk" ^
    --package=com.apps.bimcast ^
    --activity=bimcast ^
    --sym-dir="%~dp0bimcast\src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
