@echo off

IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int

:: pushd changes the current directory to the one specified
pushd bin-int 

cl ..\current_project.cpp

popd
:: popd is the inverse of pushd: it goes back

move bin-int\current_project.exe bin\current_project.exe