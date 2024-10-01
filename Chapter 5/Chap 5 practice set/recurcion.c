 #include <stdio.h>
 int factorial(int x);
int main() {
    int a ;
    printf( " Enter the value of a\n");
    scanf( "%d" , &a);
    factorial(a);
    printf( " The value of factorial of a is %d\n" , factorial(a));

return 0;
}
int factorial(int x){
    
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial( x-1);
    }
}