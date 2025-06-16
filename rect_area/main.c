#include <stdio.h>

int main(void) {
    double length;
    double width;
    double area;

    //the 'l' in %lf tells the compiler that it's a float and not a double

    printf("Enter height: ");
    scanf("%lf",&length);

    printf("Enter width: ");
    scanf("%lf",&width);

    area = (length * width);

    printf("Area of a rectangle is %.2lf",area);
    return 0;
}