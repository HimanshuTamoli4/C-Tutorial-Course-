
 #include <stdio.h>
int main() {
int i  , sum = 0 , n;
printf(" Enter the value of n\n" );
scanf(" %d" , &n);
    do{
    

    sum = sum +i ;
    i++;
    } while( i<=n);

    // for( i = 1 ; i<=n ; i++ ){
    //     sum = sum + i;
    // } 

printf(" The value of sum is %d\n" , sum);
return 0;
}