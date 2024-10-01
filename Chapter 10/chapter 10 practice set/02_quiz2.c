 #include <stdio.h>
int main() {
    int num ;
FILE *ptr ;
printf("enter the integar you need the table of \n");
scanf(" %d" , &num);
ptr = fopen(" table.txt" , "w");
for(int i = 0 ; i<10 ; i++) {
    fprintf(ptr ,"%d X %d = %d\n " , num , i+1 ,num*(i+1) );


}
printf(" successfully generated table of %d to table.txt" ,num);
fclose(ptr);
return 0;
}