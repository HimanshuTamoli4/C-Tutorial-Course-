 #include <stdio.h>
int main() {
int n , count =  0 ;

printf("enter the number\n");
scanf("%d" , &n);
if(n==0){
    printf("there is only 1  number in digit" );
}
else{
while( n!=0){
    n = n/10 ;
    count++ ;
}

printf("the total number in digit is %d" , count);
}
return 0;
}