 #include <stdio.h>
 void decrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr  = *ptr -1;
ptr++;
    }
 }
int main() {
char c[] = " !dpnf!up!uijt!sppn! " ;
decrypt(c);
printf(" encrypted tring is : %s" , c);

return 0;
}