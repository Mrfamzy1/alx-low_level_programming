#include <stdio.h>

/**
* main - Fibonacci sequence
* Return: nothing
*/

int main(void)
{
int counter 0;
long int a = 1;
long int be = a;
long int c = a + b;

while (c < 4000000)
{
if (c % 2 == 0)
{
counter += c;
}
a = b;
b = c;
c = a + b;
}
}
