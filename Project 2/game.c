 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
int snakeWatergun(char you , char comp){
// return  if you win , -1 if you loose and 0 if draw 

// cases covered 
//ss
//gg 
//ww
if(you == comp){   // --> condition for draw
    return 0;
}

// conditions for not draw
// cases covered 
// sw
// ws
// sg
// gs
// gw
// wg


if(you == 's' && comp =='w'){
    return 1;
}
else if(you == 'w' && comp =='s') {
    return -1;
}
if(you == 's' && comp =='g'){
    return -1;
}
else if(you == 'g' && comp =='s'){
    return 1;
}
if(you == 'g' && comp =='w'){
    return -1;
}
else if(you == 'w' && comp =='g'){
    return 1;
}



}

    

int main() {
char you , comp ;

int number ;
srand( time(0));
number = rand()%100 + 1;
if( number < 33){
    comp = 's';
}
else if ( number>33 && number <66){
    comp = 'w';
}
else{
    comp = 'g';
}

printf(" Enter 's' for snake , 'w' for water and 'g' for gun\n");
scanf("%c", &you);
printf(" you choose %c and computer choose %c\n" , you , comp);
int result = snakeWatergun(you , comp);
if(result == 0){
    printf(" Game draw\n");
}
else if(result == 1){
    printf("you win\n");
}
else{
    printf(" you loose\n");
}
return 0;
}