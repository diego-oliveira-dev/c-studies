@echo off

IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int

:: pushd changes the current directory to the one specified
pushd bin-int 

cl ..\random_numbers.cpp

popd
:: popd is the inverse of pushd: it goes back

move bin-int\random_numbers.exe bin\random_numbers.exe