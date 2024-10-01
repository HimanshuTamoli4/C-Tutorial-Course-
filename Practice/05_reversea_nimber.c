 #include <stdio.h>

int reverse( int num){
    int rev =  0  , rem ;
    while(num != 0){
        rem = num%10 ;   // --> this will give you last digit of num 
        rev = rev* 10 + rem ;  // -->   generate a number from reversed  with reminder last digit 
        num = num / 10 ;

    }
    return rev ;
}


int main() {

    int num  ; 
    printf(" Enter  the the number \n");
    scanf("%d" , &num);

    int rev = reverse( num );

    printf(" The reversed no is : %d" , rev);

return 0;
}