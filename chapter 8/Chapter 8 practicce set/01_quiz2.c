 #include <stdio.h>
 #include <string.h>
int main() {
    char st1[34];
    char st2[34];
    char c;
    int i = 0;
    printf("enter the first sring\n");
    scanf(" %s", st1);

printf(" enter the second string st2 character by chaeracter \n" );


    while( c!= '\n'){
        fflush(stdin);

             scanf("%c" , &c);

        
        st2[i] = c ;
        i++;
    }
    st2[i-1] = '\0';
    printf(" the value of st1 is %s\n" , st1) ;

    printf(" the value of st2 is %s\n" , st2) ;
printf(" strcmp for these strings is %d" , strcmp(st2,st2));

return 0;
}