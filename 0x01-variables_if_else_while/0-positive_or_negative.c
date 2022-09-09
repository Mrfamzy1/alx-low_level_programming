#include <stdlib.h>
#include <time.h>

/**
* main - prints a random number and states whether it positive, nagative, or zero. 
*
* Return: Always 0. 
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0) 
	printf("%d is positives\n", n);
sles if (n < 0)
	printf("%d is nagative\n", n);
else 
	printf("%d is zero\n", n);

	return (0);
}
