#include <stdio.h>
 int factorial(int x){
      if (x==1 || x==0){
        return 1;                                                                                                                                                                              
    }
    else{
        return x * factorial( x-1);
    }
    
   

}       

int main() {
    int a , fact ;
     FILE *ptr ;

    printf( " Enter the value of a\n");
    scanf( "%d" , &a);
    factorial(a);
  
    ptr = fopen("Factorial.txt" , "w");


    fact = factorial(a);
   
    fprintf( ptr , " The value of factorial of a is %d\n" , fact);

fclose(ptr);

return 0;
}
