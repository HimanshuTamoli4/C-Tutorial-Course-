 #include <stdio.h>
int main() {
int num;
  printf("enter the number whose multipication table is to be printed  : \n");
  scanf("%d" ,&num);



 printf("\n\n***********************************************************\n\n\n\n\n");





for( int i = 1 ; i<=10 ; i++){
printf("%d * %d = %d\n" , num , i , num*i );
}


return 0;
}