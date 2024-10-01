#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    
    printf("Enter number of rows\n ");
    scanf("%d", &rows);
   
    printf("Enter number of cols\n ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(i == j )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}