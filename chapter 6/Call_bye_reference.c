 #include <stdio.h>

 void  wrong_swap( int a , int b);
 void  swap( int *a , int *b);
int main() {
int a = 10 , b =20 ;

printf(" the value of a and b before swaping is %d and %d\n" , a , b);
wrong_swap(a,b);
swap(&a,&b );
printf(" the value of a and b after swaping is %d and %d\n" , a , b);
return 0;
}

 void  wrong_swap( int a , int b){
    int temp ;
    temp = a ;
    a = b ;
    b = temp ;

    printf(" a is %d and b is %d\n" , a , b);
 }



  void  swap( int *a , int *b){
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;

    printf(" a is %d and b is %d\n" , *a , *b);
 }







 