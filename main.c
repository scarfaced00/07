#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	if (n<=1) return (1);
	else return (n*factorial(n-1));
}

main(void)
{
	int n=5;
	printf("%d!=%d",n,factorial(n));
	return 0;
}
