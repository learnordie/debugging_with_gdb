// Compute the factorial of a number using recursion

#include <stdio.h>


int rfactorial(int n);

int main(void)
{
	int n, factorial;

	/* do{ */
	/* 	printf("Factorial of: "); */
	/* 	scanf("%d", &n); */
	/* } while(n < 0);  */

	n = 5;
	factorial = rfactorial(n);
	printf("\nThe factorial of %d is %d\n", n, factorial);
}


// Compute the factorial of a number using recursion
int rfactorial(int n)
{
	if (n < 1)
		return 1;
	else
		return (n * rfactorial(n-1));
}
