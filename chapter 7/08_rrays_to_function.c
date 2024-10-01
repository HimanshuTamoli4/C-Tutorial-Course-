 #include <stdio.h>
 void printArray(int *ptr , int n ){
    for( int i = 0 ; i<n ; i++){
        printf("the value of element %d is %d\n " ,i,  *(ptr+i));
    
    }
 }
 // void printArray(int ptr[] , int n ){
  //  for( int i = 0 ; i<n ; i++){
   //     printf("the value of element %d is %d\n " ,i+1,  ptr[i]);

  //  ptr[2]= 897; // this value will change in arr as main as well as well 
  //  }
// }
int main() {
    int arr[] = {1,44,874};
    printArray(arr, 3);
printf("%d" , arr[2]);//
return 0;
}