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
	long int longintTyype;
	long long int longlongintType;
	char charType;
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of char: %zu bytes\n", sizeof(charType));
	return (0);
}




