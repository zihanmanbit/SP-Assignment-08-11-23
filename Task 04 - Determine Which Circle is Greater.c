#include <stdio.h

#define PI 3.14159265359

double findArea(int radius) {
    double area = PI * radius * radius;
    return area;
}

int main() {
    int radius1, radius2;

    printf("Enter the radius of the first circle: ");
    scanf("%d", &radius1);

    printf("Enter the radius of the second circle: ");
    scanf("%d", &radius2);

    double area1 = findArea(radius1);
    double area2 = findArea(radius2);

    if (area1 > area2) {
        printf("The area of the first circle with radius %d is greater: %.2lf\n", radius1, area1);
    } else if (area2 > area1) {
        printf("The area of the second circle with radius %d is greater: %.2lf\n", radius2, area2);
    } else {
        printf("The areas of both circles are equal: %.2lf\n", area1);
    }

    return 0;
}
