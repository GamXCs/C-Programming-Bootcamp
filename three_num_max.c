#include <stdio.h>

int main()
{
    int a,b,c;
    int max,min;

    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);

    max = a;
    min = b;

    if (a<b){
        max = b;
        min = a;
    }

    if (max < c)
        max = c;

    if (c < min)
        min = c;

    printf("Maximum between 3 numbers = %d\n",max);
    printf("Minimum between 3 numbers = %d\n",min);

    return 0;
}