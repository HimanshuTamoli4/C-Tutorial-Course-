// programme of comprasion of 4 numbers

#include <stdio.h>
int main() {

    int a, b, c, d;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of  b\n");
    scanf("%d", &b);
    printf("Enter the value of  c\n");
    scanf("%d", &c);
    printf("Enter the value of d\n");
    scanf("%d", &d);

    if (a>b && a> c && a>d)
    {

        printf(" %d is greator\n", a);
    }
     else if ( b>c && b>a && b>d) {
    
        printf(" %d is greator\n", b);
    }
    else if (c>a && c>a && c>d) {
    
        printf("%d is greator\n", c);
 }
    else  {
    
        printf(" %d is grator\n", d);
    }

    return 0;
}