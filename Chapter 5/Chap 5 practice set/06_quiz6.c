
// WAP to calculate sum of first n natural numbers

#include <stdio.h>
int sum(int n);

int main()
{
    int n , add;
    printf(" Enter the Value of n\n");
    scanf(" %d", &n);
    printf(" the value of sum of n natural number is %d", sum(n));

    return 0;
}

int sum(int n){


    if (n == 0)
    {
        return n;
    }

    
    else {
        return n + sum(n-1);
    }
    
}
