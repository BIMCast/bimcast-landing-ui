:: This file was generated based on C:\ProgramData\Uno\Packages\UnoCore\0.35.8\Targets\Android\build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0bimcast\app\src\main"
set ANT_DIR=C:\Users\ManailMJ\AppData\Local\Fusetools\Fuse\Android\Ant
set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_101
set SUPPORT_JAR="C:/Users/ManailMJ/AppData/Local/Android/sdk\extras\android\support\v4\android-support-v4.jar"

echo ## 1/2: libbimcast.so
call makew -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
if exist %SUPPORT_JAR%  (
   "C:\Program Files\Fuse\uno.exe" cp %SUPPORT_JAR% libs\android-support-v4.jar || goto ERROR
) else (
    echo ERROR: supportv4.jar was not found. Please run 'fuse install android' in your shell and then restart your build
    echo ERROR: expected jar at %SUPPORT_JAR%
    goto ERROR
)

echo.
echo ## 2/2: bimcast.apk
if exist "%ANT_DIR%\bin\ant.bat" (
    set "ANT=%ANT_DIR%\bin\ant.bat"
) else (
    echo ERROR: ant.bat was not found in "%ANT_DIR%\bin"
    goto ERROR
)

call "%ANT%" debug || goto ERROR

cd "%~dp0"
"C:\Program Files\Fuse\uno.exe" cp bimcast/app/src/main/bin/bimcast-debug.apk bimcast.apk || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
