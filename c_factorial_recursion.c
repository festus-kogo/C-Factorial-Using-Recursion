#include <stdio.h>
#include <stdlib.h>
unsigned int factorial(unsigned int n);

unsigned int factorial(unsigned int n)
{
    if (n == 1 || n == 0)
    {
        return (1);
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    printf("Factorial of 4! = %d\n", factorial(4));
    return 0;
}
