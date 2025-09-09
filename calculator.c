#include <stdio.h>

int main()
{
    float num1,num2;
    char symbol;

    printf("Enter a number:\n");
    scanf("%f",&num1);

    printf("Choose an operation:(+ - * /)\n");
    scanf(" %c",&symbol);

    printf("Enter a number:\n");
    scanf("%f",&num2);

    switch(symbol){
        case '+':
            printf("%f+%f=%f\n",num1,num2, num1 + num2);
            break;
        case '-':
            printf("%f-%f=%f\n",num1,num2,num1 - num2);
            break;
        case '*':
            printf("%f*%f=%f",num1,num2,num1 * num2);
            break;
        case '/':
            if (num2 != 0){
                printf("%f/%f=%f",num1,num2,num1 / num2);
            }
            else {
                printf("Error! Cannot divide by 0.");
            }
            break;
        default:
            printf("You have attempted an operation outside the scope.");
            break;

    }

    return 0;

}