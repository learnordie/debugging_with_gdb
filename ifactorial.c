// Compute the factorial of a number using iteration

#include <stdio.h>


int ifactorial(int n);

int main(void)
{
	int n, factorial;

	/* do{ */
	/* 	printf("Factorial of: "); */
	/* 	scanf("%d", &n); */
	/* } while(n < 0); */

	n = 5;
	factorial = ifactorial(n);
	printf("\nFactorial using iterartion\n");
	printf("\tThe factorial of %d is %d\n", n, factorial);
}


// Compute the factorial of a number using iteration
int ifactorial(int n)
{
	int factorial = 1;

	for(int i = 1; i <= n; i++){
		factorial *= i;
	}

	return factorial;
}
