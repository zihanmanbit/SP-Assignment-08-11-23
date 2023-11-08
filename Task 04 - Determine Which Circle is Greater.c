#include<stdio.h>

#define PI 3.141592654

double findArea(int radius)
{
    return PI * radius * radius;
}

int main()
{
    int rad1, rad2;

    printf("Enter the radius of the first circle: ");
    scanf("%d", &rad1);

    printf("Enter the radius of the second circle: ");
    scanf("%d", &rad2);

    double area1 = findArea(rad1);
    double area2 = findArea(rad2);

    if (area1 > area2)
        printf("The area of the first circle with radius %d is greater, which is %.2lf\n", rad1, area1);
    else if (area2 > area1)
        printf("The area of the second circle with radius %d is greater, which is %.2lf\n", rad2, area2);
    else
        printf("The areas of both circles are equal: %.2lf\n", area1);

    return 0;
}
