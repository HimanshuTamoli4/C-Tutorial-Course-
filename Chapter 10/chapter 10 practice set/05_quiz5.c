 #include <stdio.h>
int main() {
    int num;
FILE *ptr1;
FILE *ptr2 ;

ptr1 = fopen(" quiz5.txt" , "r");
ptr2 = fopen("double.txt" , "w");
  fscanf(ptr1 , "%d" , &num);
 fprintf(ptr2 , "  %dx%d = %d" , num , 2, 2*num) ;


return 0;
}