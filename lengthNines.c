#include <stdio.h>

// if length <= 9, return a count up the length
// if length is > 9, return the amount of 9's that equal length

long nineNum(long length);
int main()
{
    nineNum(4);
    nineNum(13);

    return 0;
}

long nineNum(long length)
{
    int i;
    long num = 0;
    
    if (length <= 9){
        for (i = 1; i <= length; i++){
            printf("%d", i);
        }
        printf("\n");
    } else {
        for (i = 0; i < length; i++){
            num = num * 10 + 9;
        }
        printf("%ld\n",num);
    }
    
    return num;
}