#include <stdio.h> 
void change(int *n) ;

int main() 
{ 
    int n; 
    printf("Enter the number\n"); 
    scanf("%d", &n); 
    change(&n); 
            printf("10 times of the given number is %d", n); 

    return 0; 
} 

void change( int *n) 
{ 
    *n = *n * 10; 

} 