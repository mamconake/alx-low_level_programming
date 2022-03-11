#include<stdio.h>
/**
 * main - main function 
 * Description: The function print some text to the stdout
 * Return: returns void 
 * */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	//sizeof evaluates the size of a variable
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	return (0);
}




