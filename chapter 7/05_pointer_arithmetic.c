 #include <stdio.h>
int main() {
int i = 34;
int *ptr = &i;
printf(" the value is %u\n" , ptr);
ptr++; //  increse by 4  = ptr + 1 = ptr + 1*4 
ptr++; //  increse by 8 = ptr + 2 = ptr + 2*4 
ptr-- ; // decrese by 4   = ptr - 1 = ptr - 1*4 
ptr -- ; //  decrese by 8  = ptr - 1 = ptr - 2*4 
printf(" the value is %u\n" , ptr);

return 0;

// charcter is 1 bytes in memory so it will increse or decreswe by 1
// floa is same as integar 


















}