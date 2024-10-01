 #include <stdio.h>

 struct complex {
    int real;
    int imaginory;
 };
int main() {
struct complex c1 , c2;
 c1.real = 34 ;
c1.imaginory = 56;
printf(" real part  is %d and imagniory part is %d\n" , c1.real , c1.imaginory);

 c2.real = 34 ;
c2.imaginory = 56;
printf(" real part  is %d and  imaginory part  is %d\n" , c2.real , c2.imaginory);
return 0;
}
