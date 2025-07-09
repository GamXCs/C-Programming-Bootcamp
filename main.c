#include <stdio.h>

int main()
{
    int grade1;
    int grade2;
    int grade3;
    double average;

    printf("Enter grade 1: ");
    scanf("%d",&grade1);
    
    printf("Enter grade 2: ");
    scanf("%d",&grade2);
    
    printf("Enter grade 3: ");
    scanf("%d",&grade3);
    
    average = (grade1 + grade2 + grade3) / 3.0;
    printf("Your average is %.2lf", average);
    
    return 0;
}