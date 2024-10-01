
 #include <stdio.h>
int  main() {
    int i,j,space , raws;
    printf(" enter the number of raws\n");
    scanf("%d" , &raws);
    for(  i= 1; i<=raws ; i++ ){
        for(  space = 1; space<= (raws-i); space++){
            printf(" ");
        }
        for(  j = 1 ; j <= (2*i-1); j++){
            printf("*");
        }printf("\n");
    }

return 0;
}





