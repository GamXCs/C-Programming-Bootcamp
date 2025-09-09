#include <stdio.h>

void max_digit(int num);
int main()
{
    max_digit(35);
    return 0;
}

void max_digit(int num)
{
    if (num > 99 || num < 10){
        printf("Error! Not 2-digit number!\n");
    }
    else {
        if (num % 10 > num / 10){
            printf("Maximum digit in %d = %d\n",num, num % 10);
        }else
        printf("Maximum digit in %d = %d\n", num,num / 10);
    }

    
}