
#include <stdio.h>

int main()
{
    int num;
    int power;
    int result = 1;
    
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    printf("Enter a power: ");
    scanf("%d",&power);
    
    for (int i = 1;i <= power;i++){
        result = result * num;
    }
    
    printf("%d raised to the power of %d is %d\n",num,power,result);

    return 0;
}