#include <stdio.h>
// Sum is function which takes a  and b as input and returns an integar as an output

int sum(int a, int b); // fubnction prototype declraction
int main()   
{

    int result;
    result = sum(2, 78); // Function call

    printf(" The value of result is %d\n", result);

    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
   return result;
}