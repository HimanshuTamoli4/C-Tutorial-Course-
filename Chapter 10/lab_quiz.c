 #include <stdio.h>
int main() {
FILE *ptr ;
FILE *ptr2 ;
int num , num2;
ptr = fopen("Read.txt" , "r");
ptr2 = fopen("Write.txt" , "w");
if( ptr == NULL){
printf(" the file doesn't exist\n");
}

else{
fscanf(ptr ,"%d" , &num);
fscanf(ptr ,"%d" , &num2);

fprintf(ptr2 , " the value of num is %d\n" , num);
fprintf(ptr2 , " the value of num is %d\n" , num2);

fclose(ptr);
}
fclose(ptr2);
return 0;
}