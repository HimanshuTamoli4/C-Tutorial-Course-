 #include <stdio.h>
 int sum( int a, int b);
int main() {
int a =4 , b=7 ;
printf(" the value of sum of a and b after function call  is %d and %d\n" , a,b);


printf(" the value of sum of a and b is %d\n" , sum(a,b));

return 0;
}

 int sum( int a, int b){
    int c; 
    c = a+b ;
    b = 3434;
    a =  23432;
    return c;
 }
