#include <stdio.h>

int isEven(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d",&n);

    int res=isEven(n);

    if(res==1)
        printf("%d is even.\n",n);
    else
        printf("%d is odd.\n",n);

    return 0;
}
