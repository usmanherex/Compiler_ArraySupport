@echo off
SETLOCAL

REM Check if input file is provided
IF "%~1"=="" (
    echo Usage: %0 input_file
    exit /b 1
)

REM Compile the Flex and Bison files
echo Running Flex on ssc.l...
flex ssc.l

echo Running Bison on ssc.y...
bison -d ssc.y

echo Compiling with g++...
g++ -o ssc_compiler ssc.tab.c lex.yy.c

REM Run the compiled program with the provided input file
echo Running the compiler with input file: %1...
.\ssc_compiler %1

ENDLOCAL
