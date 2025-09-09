#include <stdio.h>


int main()
{
    int grades;
    double average;
    int count = 0;
    int sum = 0;
    
    printf("Enter grades: (type -1 to quit) \n");

    // While loop checks for a valid numerical input
    // scanf both read and returns an integer (1)
    // if usr types an non-number, it returns 0
    // it is checking that the scanf function read an int
    while (scanf("%d",&grades) == 1 && grades != -1){
        sum += grades;
        count += 1;
    }
    

    if (count > 0){
        average = (double)sum/count;
        printf("The average grade is %.2f\n",average);
    } else {
        printf("No grades were entered.");
    }
    return 0;
}