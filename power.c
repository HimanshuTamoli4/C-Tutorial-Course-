// #include <stdio.h>6
// #include <math.h>
// int main()
// {

//     int a, b;
//     printf(" Enter the value of a\n");
//     scanf("%d", &a);

//     printf(" Enter the value of b\n");
//     scanf("%d", &b);

//     printf("the value of a to the power b is %f\n", pow(a, b));

//     return 0;
// }


 #include <stdio.h>
int main() {
int i = 0  , skip = 5 ;
while(i<10){
    if(i != skip){
        continue;
    }
    else{
        printf("%d" , i);
    }
}

return 0;
}