@echo off
set PATH=%PATH%;C:\Program Files (x86)\Embarcadero\Dev-Cpp\TDM-GCC-64\bin
ltecac 1+2 > tests\tmp.s
gcc tests\tmp.s -o tests\tmp.exe
tests\tmp.exe
echo Exit code: %ERRORLEVEL%