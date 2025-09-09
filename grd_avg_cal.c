// take grades until -1 is entered/calc grade avg/print avg
#include <stdio.h>

int main()
{
    int grade,average;
    int sum = 0;
    int gradesCount = 0;

    printf("Enter a grade (type -1 to q): ");
    scanf("%d",&grade);

    while (grade != -1){
        sum = sum + grade;
        gradesCount +=1;
        printf("Enter a grade (type -1 to q): ");
        scanf("%d",&grade);
    }

    if (gradesCount > 0){
        average = sum / gradesCount;
        printf("The average for these grades is %d\n", average);
    } else {
        printf("No grades were entered.\n");
    }


    return 0;
}