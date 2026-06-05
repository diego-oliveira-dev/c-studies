@echo off
cls

IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int

cl /nologo /TC ^
   /Febin\current_project.exe ^
   /Fobin-int\ ^
   playground\current_project.c

if %ERRORLEVEL% neq 0 exit /b %ERRORLEVEL%

bin\current_project.exe