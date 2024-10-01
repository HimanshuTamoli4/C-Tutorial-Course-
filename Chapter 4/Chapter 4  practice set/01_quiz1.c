 #include <stdio.h>
int main() {
int n  , i; 
printf("enter the the value of n\n");
scanf(" %d" , &n);
printf( " ** The multipication table of n number\n");
for(int i = 10 ; i; i--) {
    printf(" %d X %d = %d\n" , n, i , i*n  );
}
return 0;
}