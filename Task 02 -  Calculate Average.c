#include <stdio.h>

float calculateAverage(float num1,float num2)
{
    return (num1+num2)/2.0;
}

int main()
{
    float a,b,avg;
    scanf("%f%f",&a,&b);
    avg=calculateAverage(a,b);
    printf("The average of %.2f and %.2f is %.2f\n",a,b,avg);

    return 0;
}
