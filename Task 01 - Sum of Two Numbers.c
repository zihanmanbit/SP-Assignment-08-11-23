#include <stdio.h>

int add(int num1,int num2)
{
    return num1+num2;
}

int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("The sum of %d & %d is %d.\n",a,b,sum);

    return 0;
}
