#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

int number , guess , nguesses = 1;
srand( time(0));
number = rand()%100 + 1;  // This will generate a random number between 1 to 100
//printf(" the number is %d \n" , number); 
 // Keep ruing the loop untill the number is guessed
 do{
     printf(" Guess the number between 1 to 100\n");
     scanf(" %d" , &guess);        
     if( guess>number ){
        printf(" Lower number please\n");
     }
     else if(guess<number) {
        printf( " higher number please\n" );
     }
     else{
        printf(" You guessed it  im %d attempts\n " , nguesses);
     }
     nguesses++;
 }while( guess != number);









    return 0;
}
