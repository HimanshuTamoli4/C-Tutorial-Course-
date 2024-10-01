 #include <stdio.h>
int main() {
char s[100];
int len = 0 ;
char temp ;
printf("Enter a word : \n");
gets( s);

while(s[len]!= '\0'){
    len++;
}

printf("the lenght this string is %d\n" , len);
for( int i = 0 ; i <= (len-1)/2 ;  i++){

    temp = s[i];
    s[i] = s[len-1-i];
    s[len-1-i] = temp ; 

}

printf("string now is :  %s" , s);
return 0;
}