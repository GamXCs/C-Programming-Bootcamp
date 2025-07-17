#include <stdio.h>

int main()
{
    int d;
    int a_one;
    int n;
    int a_n;
    
    printf("Enter the Initial term (a1): \n");
    scanf("%d",&a_one);
    
    printf("Enter the difference between the terms (d): \n");
    scanf("%d",&d);
    
    printf("Enter the number of elements in the Arithmatic Sequence (n): \n");
    scanf("%d",&n);
    
    a_n = a_one + (n - 1) * d;
    printf("The n-th term in the arithmatic sequence is %d\n",a_n);
    
    

    return 0;
}