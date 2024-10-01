 // sky value of A = 64
 #include <stdio.h>
int main() {
    int i , j , raws;
    
    printf(" enter the number of raws\n");
    scanf("%d" , &raws);
    for(  i= 1; i<=raws ; i++ ){

        for( j = 1 ; j<=i ; j++){
            printf("%c", 64 + j);
        }
            printf("\n");
    }

return 0;
}