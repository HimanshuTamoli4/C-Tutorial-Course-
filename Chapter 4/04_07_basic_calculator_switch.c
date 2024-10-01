 #include <stdio.h>
int main () {
int a,b;
int op;
printf(" 1.Addition\n 2.Subtraction\n 3.Multipication\n 4.division\n 5.reminder\n");
scanf(" %d" , &op);
printf(" Enter the value of a and b\n");
scanf(" %d %d" ,&a ,&b);
switch(op) {
    case 1:
     printf(" The value of addition of a and b is %d\n" , a+b); 
    break;

  case 2:
     printf(" The value of subtraction of a and b is %d\n" , a-b); 
    break;
  case 3:
     printf(" The value of multipication of a and b is %d\n" , a*b); 
    break;
  case 4:
     printf(" The value of division of a and b is %d\n" , a/b); 
    break;
  case 5:
     printf(" The value of reminder when a is devided by b of  %d\n" , a%b); 
    break;

default:
          printf( " Enter the correct choice\n");
}
   return 0;
}