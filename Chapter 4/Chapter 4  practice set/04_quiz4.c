// programme to Find  factorial of gien number

 #include <stdio.h>
int main() {
int i = 0 , n  ,  fact = 1;
printf(" Enter the value of n\n");
scanf(" %d" , &n);
for( i = 1 ; i<=n ; i++){
    fact *= i;
} 
printf(" The value of factorial of given number is %d\n" , fact);
return 0;
}