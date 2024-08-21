#!/bin/bash
echo "Choose an option:"
echo "1) Calculator via normal operators"
echo "2) Calculator via bitwise operators"
read -p "Enter your choice [1 or 2]: " choice
case $choice in
    1)
        variable_name="simpleCalcLib"
        ;;
    2)
        variable_name="bitwiseCalcLib"
        ;;
    *)
        exit 0
        ;;
esac


#Simple Calculator Library
cd simpleCalcLib
gcc -c calc.c -o simpleCalc.o
ar rcs lib_calc.a simpleCalc.o
rm simpleCalc.o
cd ..

#Bitwise Calculator Library
cd bitwiseCalcLib
gcc -c calc.c -o bitwiseCalc.o
ar rcs lib_calc.a bitwiseCalc.o
rm bitwiseCalc.o
cd ..

#Sourcing main file by Linking it with Library
gcc -c main.c -o main.o
gcc -o main main.o -L. ./$variable_name/calc.c
rm main.o

#Removing Libraries
rm bitwiseCalcLib/lib_calc.a simpleCalcLib/lib_calc.a

#Done
echo "Done Sucessfully!!!"
echo "Now ./main in your terminal"
