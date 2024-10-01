 #include <stdio.h>
int main() {
int num , sum = 0;
printf(" Enter the natural number you want  the sum of of\n");\
scanf("%d" , &num);


// runs in linear time 
// for( int i = 1; i<=num  ; i++){

// sum = sum + i ;
// }
 
 // runs in a constant time  and moree convienient way 

 sum = (num*num + num)/2 ;

printf(" sum of %d natural no is %d \n  " , num , sum);
return 0;
} 