#include <stdio.h>  
#include <math.h>
 int main()  
{  
    int raws;  
    printf("Enter the number of rows");  
    scanf("%d",&raws);  
    for(int i=0;i<=raws;i++)  
    {  
    for(int j=  1    ;j<=pow(2,i);j++)  
        {  
            printf("*");  
        }  
        printf("\n");  
    }  
      
    return 0;  
}  