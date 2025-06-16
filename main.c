#include <stdio.h>

int main(void) {
// getting input from the user
// the '&' refers to the memory address
     int grade1;
     int grade2;
     scanf("%d",&grade1);
     scanf("%d",&grade2);
     printf("Average=%d\n",(grade1+grade2)/2);


    return 0;
}