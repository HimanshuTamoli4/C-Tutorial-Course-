 #include <stdio.h>
 void printAdd(int a);
int main() {
    int i = 4;
                printf(" The adress of i is %d\n " , i);
                printAdd(i);
    printf(" The adress of variable i is %u\n" , &i);

return 0;
}

 void printAdd(int a){
    printf(" The adress of variable a is %u\n" , &a);
 }
