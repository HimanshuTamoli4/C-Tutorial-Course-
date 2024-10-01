 #include <stdio.h>
int main() {
int a,b  ;
printf("enter the number a\n");
scanf("%d ",&a);
printf("enter the power b\n");
scanf("%d", &b);

 int power = a ;
 int i = 1 ;
while( i<b ){

a = power*a;
i++;

}
printf("  The value of number's power is  %d" , a);
return 0;
}