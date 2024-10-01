 #include <stdio.h>
int main() {
int n , i = 1, factorial = 1 ;
printf( " Enter the value of n\n");

scanf(" %d" , & n);

while( i<=n ){
    
   factorial *= i;

    i++;
}
    printf(" the value of factorial of a is %d \n" , factorial);

return 0;
}