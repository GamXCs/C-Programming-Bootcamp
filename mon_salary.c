#include <stdio.h>

int main()
{
    float hour_rate, worked_hours,salary;

    printf("Enter the hourly rate: ");
    scanf("%f",&hour_rate);

    printf("Enter the hours worked: ");
    scanf("%f",&worked_hours);

    salary = (hour_rate * worked_hours);
    printf("The monthly salary is $%.2f",salary);

    return 0;
}