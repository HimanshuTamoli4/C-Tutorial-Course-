#include <stdio.h>
/* for n =3
   *
   ***
   *****
   1 - 1 star
   2- 3 star
   3 - 5 star
   n - (2n-1) star


      */
void printpattern(int n);
int main()
{
    int n = 10 ;
    printpattern(n);
   // printf(" Enter the value of n\n");
   // scanf(" %d", &n);

    return 0;
}

void printpattern(int n)
{
    if (n == 1)
    {
        printf(" *\n");
        return ;
    }
    printpattern(n - 1);
    
        for (int i =0  ; i < (2*n - 1); i++){

            printf(" *");
    }
    printf(" \n");
}


