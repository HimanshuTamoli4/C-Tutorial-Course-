 #include <stdio.h>
int main() {
FILE *ptr;
int num , num2;
ptr = fopen("Himanshu.txt" , "r");

if( ptr == NULL){
printf(" the file doesn't exist\n");
}

else{
fscanf(ptr ,"%d" , &num);
fscanf(ptr ,"%d" , &num2);

printf(" the value of num is %d\n" , num);
printf(" the value of num is %d\n" , num2);

fclose(ptr);
}
return 0;
}