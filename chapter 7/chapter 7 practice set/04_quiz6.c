#include<stdio.h>

int countPositiveNumbers(int *arr, int n)  
{
 int pos_count = 0;
 int i;
 for (i = 0; i < n; i++) {     // ==> function to find count of positive number in array similiarly we can write it for negative numbers 
   if (arr[i] > 0)
   pos_count++;
 }
 return pos_count;

}
 int countNegativeNumbers(int *arr , int n  ){
 int neg_count = 0;
 int i;
 for (i = 0; i < n; i++) {
  if (arr[i] < 0)
   neg_count++;
 }
 return neg_count;
}
 
// Function to print the array
void printArray(int* arr, int n)
{
 int i;
 
 printf("Array: ");
 for (i = 0; i < n; i++) {
  printf("%d ", arr[i]);
 }
 printf("\n");
}
 

int main()
{
 int arr[] = { 2, -1, 5, 6, 0, -3 };
 int n;
 n = sizeof(arr) / sizeof(arr[0]);
 
 printArray(arr, n);
 
 printf("Count of Positive elements = %d\n",
  countPositiveNumbers(arr, n));
 printf("Count of Negative elements = %d\n",
  countNegativeNumbers(arr, n));
 
 return 0;
}