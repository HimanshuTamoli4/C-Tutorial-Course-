 #include <stdio.h>
int main() {
int celcius; 
  int fahrenheit;
fahrenheit = ( 1.8*celcius + 32) ;
printf( " Enter the value of celcius\n" );
scanf( " %d" , &celcius);
printf( " The temprature in  fahrenheit is %d\n " , fahrenheit);

return 0;
}