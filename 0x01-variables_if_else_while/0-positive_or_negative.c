#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number an states whether
 * it is positive,negative or zero
 * Return: Always 0
 */
int main(void)
{
int n;

Srand(time(0));
n=rand() -RAND_MAX/2;

if (n>1) 
	print f("%d is positive\n",n);
else if (n<0)
	print f("%d is negative\n",n);

else 
	print f("%d is zreo\n",n);

return (0)


