 #include <stdio.h>
int main() {
FILE *fp ;
int  i ;
if((fp = fopen("sample.txt" , "w")) == NULL){
    if("\n error opening file sample.txt");
}
printf("\n enter an integer: ");
scanf("%d",&i);
fprint(fp,"%d\n",i);
fclose(fp);


return 0;
}