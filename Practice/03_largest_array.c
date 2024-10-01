 #include <stdio.h>

int returnmax(int arr[] , int n){
    int max = 0;
for(int i = 0 ; i<n ; i++){
if( arr[i] > max){
    max = arr[i];
}
}
//arr[0] = 999 ;
return max ;
}

int returnmin(int arr[] , int n){
    int min = arr[0];
for(int j = 0 ; j<n ; j++){
if( arr[j] < min){
    min = arr[j];
}
}

return min ;
}



int main() {
int arr[] = {1,12,3,5455,67,654};
int max = returnmax(arr , 6) ;
int min = returnmin(arr , 6);
printf("The maximum element5 in this array is %d\n" , max);

printf("The minimum element5 in this array is %d\n" , min);
// for(int i = 0 ;i<7 ; i++){
//     printf("the %d element of array is %d\n  " , i ,arr[i]);
// }

return 0;
}