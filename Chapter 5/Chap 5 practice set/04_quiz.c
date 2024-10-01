// WAP to calculate fibmocci series
// hint =>  fib(n) =  fib(n -1) + fib(n-2)
// base condition => fib(1) = 0  , fib(0) = 1

#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    printf(" enter the value of n\n");
    scanf(" %d", &n);
    fib(n);
    printf(" the value of fib is %d\n", fib(n));
    return 0;
}

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
