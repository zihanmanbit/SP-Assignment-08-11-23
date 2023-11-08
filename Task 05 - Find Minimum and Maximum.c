#include <stdio.h>

int findMin(int arr[],int size)
{
    int mn=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<mn)
            mn=arr[i];
    }
    return mn;
}

int findMax(int arr[],int size)
{
    int mx=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>mx)
            mx=arr[i];
    }
    return mx;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);

    int minimum=findMin(arr,size);
    int maximum=findMax(arr,size);

    printf("Minimum value in the array is %d.\n",minimum);
    printf("Maximum value in the array is %d.\n",maximum);

    return 0;
}
