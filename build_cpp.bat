@echo off
cls

IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int

cl /nologo /EHsc ^
   /Febin\current_project.exe ^
   /Fobin-int\ ^
   playground\current_project.cpp

if %ERRORLEVEL% neq 0 exit /b %ERRORLEVEL%

bin\current_project.exe