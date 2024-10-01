 #include <stdio.h>
int main() {
int i = 2, n ;
printf(" enter the value of n\n");
scanf(" %d" , &n);
while(i<n){
    i++;
    if(n%i == 0){
        printf( " The is not a prime number");
        break;
    }
    else{
        printf("The is  a prime number ");
        break; 
    }
    
} 
return 0;
}