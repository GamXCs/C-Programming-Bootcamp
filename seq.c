#include <stdio.h>

int main()
{
    int lengthseq,result;
    
    printf("Enter a length for the n-th sequence: ");
    scanf("%d",&lengthseq);
    
    result = nine_s(lengthseq);
    printf("Result = %d",result);
}

int nine_s(int length)
{
    int num = 0;
    
    for (int i = 0; i < length; i++){
        num = num * 10 + 9;
    }
    return num;
}