#include <stdio.h>

int countOccurrences(int arr[],int size,int track)
{
    int cnt=0;
    for(int i=0;i<size;i++){
        if(arr[i]==track)
            cnt++;
    }
    return cnt;
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

    int track;
    printf("Enter the integer to count: ");
    scanf("%d",&track);

    int occurrences=countOccurrences(arr,size,track);

    printf("The integer %d appears %d times in the array.\n",track,occurrences);

    return 0;
}
