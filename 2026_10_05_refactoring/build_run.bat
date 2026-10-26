@echo off
chcp 1251 > log
del log

set MAIN=zadanie_refactoring.cpp
set EXE=zadanie_refactoring.exe

:: -fexec-charset=utf-8 в Windows не работает
set CHARSET="-finput-charset=utf-8 -fexec-charset=windows-1251"

if exist %EXE% del %EXE%

g++ "%CHARSET%" %MAIN% -o %EXE%

%EXE%
