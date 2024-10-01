 #include <stdio.h>
 #include <stdlib.h>
int main() {
int *ptr;
 ptr = (int *)malloc(10 * sizeof(int));
for( int i = 0 ; i<10 ; i++){
ptr[i] = 7*(i+1);
    printf(" The multipication table of 7 is 7x%d = %d\n" , i+1, ptr[i]);
    
}printf("\n\n");


ptr = realloc(ptr , 15 * sizeof(int));

printf("after reallocation\n\n");

for( int i = 0 ; i<15 ; i++){

   ptr[i] = 7*(i+1);
    printf(" The multipication table of 7 is 7x%d = %d\n" , i+1, ptr[i]);
    

}


return 0;
}