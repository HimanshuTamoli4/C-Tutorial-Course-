 #include <stdio.h>
int main() {
int  mul[10];
int n;
printf("Enter the value of number\n");
scanf(" %d", &n);

for( int i =0 ; i<=10 ; i++){
    mul[i] = n*(i+1);
}

for(int i = 0 ; i<10 ; i++){
printf(" nx%d = %d\n" , i+1 , mul[i]);
}
return 0;
}