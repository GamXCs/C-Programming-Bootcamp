#include <stdio.h>

int factorial(int n);
int main()
{
    int usr_num;
    printf("Enter a number to compute its factorial: ");
    scanf("%d",&usr_num);

    printf("Factorial(%d) = %d\n",usr_num,factorial(usr_num));
}

int factorial(int n)
{
    int result = 1;
    if(n < 0){
        return -1;
    } else{
        for (int i = 1; i <= n;i++){
            result *= i;
        }
    }
    return result;

}