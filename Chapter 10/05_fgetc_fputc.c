 #include <stdio.h>
int main() {
FILE *ptr; 
ptr = fopen( "getcdemo.txt" , "r");
//char c = fgetc(ptr);
//printf(" The vslue of my character is %c\n" , c);
//printf(" The vslue of my character is %c\n" , c);
//printf(" The vslue of my character is %c\n" , fgetc(ptr));  --> fgetc is used to reading a file vharacter by character 
//printf(" The vslue of my character is %c\n" , fgetc(ptr));


ptr = fopen("putdemo.txt" , "w");
putc('c' , ptr); // --> this function is used to write charaqcter by character in a file 
putc('c' , ptr);
fclose(ptr);

return 0;
}