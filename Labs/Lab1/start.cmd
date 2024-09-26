@echo off
gcc --version
echo __________________________
cd C:\Prodgekt\Labs\Lab1
gcc -c main.c lib.C
gcc -o go main.o lib.o
go.exe
pause
cls