// a program to divide 2 predefined integer values and print the output
#include<stdio.h> // standard input output header file
#include<conio.h> //standard console input output header file
int main() // main function that returns a integer value, because it can't return a null value when printing the remainder
{ // opening block of the main function
	int num1, num2, remainder; // declaration of the variables
	num1 = 10; // assigning value to the variable 'num1'
	num2 = 5; // assigning value to the variable 'num2'
	remainder = num1 % num2; // dividing 'num1' & 'num2' & storing the remainder into the variable named as 'remainder'
	printf("%d",remainder); // print statemnt, which includes integer data type specifier i.e '%d'
}
