#include <stdio.h>

/* Formula for sum of arith seq: Sn = (a1 + an) * n/2*/
int main()
{
    int Sn;
    int a_one;
    int n;
    int a_n;
    int divisor;

    printf("Enter the initial term (a1):");
    scanf("%d",&a_one);

    printf("Enter the n-th term (an):");
    scanf("%d",&a_n);

    printf("Enter the number of elements in the sequence (n):");
    scanf("%d",&n);

    Sn = (a_one + a_n) * n / 2;

    printf("The sum of the arithmatic sequence is %d",Sn);

    return 0;
}