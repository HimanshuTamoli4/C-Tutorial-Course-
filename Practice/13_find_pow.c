 #include <stdio.h>
int main() {
int n  , m ; 
long long int val =  1 ;
printf("enter the no whose power you want to calculate : \n");
scanf("%d" , &n);
printf("enter the number power \n");
scanf("%d" , &m);

for(int i = 0 ; i<n ; i++){
    val = val*m ;
}
 
printf("the value of %d to the power %d is : ll%d" , n , m , val);

return 0;
}