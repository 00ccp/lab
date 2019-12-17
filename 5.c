#include <stdio.h>
float a[5]={1.0,2.0,3.0,4.0,5.0}; // N is 5
int main()
{   float sum = 0.0,avg;
    int i;
    for (i=0; i < 5; i++)
    sum += a[i];
    avg = sum/5;
    printf("Avg is %f\n", avg);
    printf("Deviation of each number\n");
    for (i=0;i <5;i++)
    printf("%f ", a[i]-avg);

    return 0;
}
