#include <stdio.h>

int main()
{
    char grade;
    
    printf("Please enter a grade(A-F):");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'A':
            printf("Grade between 90-100 \n");
            break;
        case 'B':
            printf("Grade between 80-89 \n");
            break;
        case 'C':
            printf("Grade between 70-79 \n");
            break;
        case 'D':
            printf("Grade between 60-69 \n");
            break;
        case 'F':
            printf("Grade is 50 or below \n");
            break;
        default:
            printf("Error! Please enter the appropriate grade.");
            break;
    }


    return 0;
}