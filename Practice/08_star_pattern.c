//  wap to print following star pattern
//     * 
//    **
//   *** 
 #include <stdio.h>

int main() {
int n ;
printf("enter the value of n : \n ");
scanf("%d" , &n);
for(int i = 0 ; i<=n ; i ++){
    for(int space = 0 ; space <=(n-i); space ++){
        printf(" ");
    }
    for(int j=0 ; j<=i ; j++){
        printf("*");
    }printf("\n");
}


return 0;
}


// another way to print this pattern 
//  #include <stdio.h>
// int main() {
// int n = 5 ;
// for(int i = 0 ; i< n ; i++){
//     for(int j = 0 ; j< n ; j++ ){
//         if(i+j>=n-1){
//             printf("*");
//         }
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }
// return 0;
// }

