 #include <stdio.h>
 int occurence(char st[] , char c){
    char *ptr = st;
    int count = 0 ;

    while(*ptr!= '\0'){
        if(*ptr == c){
            count++ ;
        }
        ptr++;
        }
       //return count ;

       if(count == 0){
        printf(" The character is not present is string ");
       }
       else{
                printf(" The character is  present is string ");

       }

 }
int main() {
char st[] = "Himanshu";
int count = occurence(st , 'r');




return 0;
}