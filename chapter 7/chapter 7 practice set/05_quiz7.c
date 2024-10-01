 #include <stdio.h>
 void printtable( int *multable , int num , int n ){
for( int i =0 ; i<n ; i++){
    multable[i] = num*(i+1);
}

for(int i = 0 ; i<n ; i++){
printf(" %dx%d = %d\n" ,num,  i+1 , multable[i]);
}
printf("***************************************************************\n\n");

 }
int main() {

    int m, n ,  num;
  int   multable[3][10];                                                    

  printf(" enter the value of number whose multipaction table u wamt to see\n");
  scanf("%d" , &num);

  //  printf(" enter the value of level\n");
  // scanf("%d" , &m);
printf(" enter the value of number n \n");
  scanf("%d" , &n);
printtable( multable[m] , num, n);



return 0;
}
