         #include <stdio.h>
        int main() {
        int a = 6;
        int *b;
        b = &a;
            printf(" The adress of a is %u\n " , b);
    printf(" The value of a is %d\n " , *b);
        printf(" The value of a is %d \n" , a);


        return 0;
        }