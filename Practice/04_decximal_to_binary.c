 #include <stdio.h> 



int main() {
    int n  , rem  , i;
int a[40];
 printf("enter the value of n\n");
 scanf("%d" , &n);


     while( n!=0 ){
        rem = n%2 ;
        n = n/2 ;
        a[i]= rem ;
        i ++ ;
     }

     for( int j = i -1 ; j>=0 ; j--){
        printf("%d" , a[j]);
     }
if( n == 0){
    printf( "0000");
}
return 0; 
}