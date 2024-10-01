#include <stdio.h>
void sumAndavg(int a, int b, int *sum, float *avg);
int main()
{
    int i = 3;
    int j = 6;
    int sum;
    float avg;
    sumAndavg(i, j, &sum, &avg);
    printf(" the  value of sum is %d\n", sum);
    printf(" the  value of avg is %f\n", avg);

    return 0;
}

void sumAndavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
