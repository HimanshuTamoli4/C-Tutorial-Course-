 #include <stdio.h>
int main()
{
    int i, n, prime = 1;
    printf(" enter the value of n\n");
    scanf(" %d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }

        if (prime == 0)
        {
            printf(" This is not a prime number ");
        }
        else
        {
            printf(" This is  a prime number ");
        }
    }

    return 0;
}