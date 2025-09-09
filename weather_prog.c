#include <stdio.h>
#include <stdlib.h>

int main()
{
double c_temperature;
double converted_c_temp;
double f_temp;
double converted_f_temp;

printf("Enter a temperature in Celsius that you want in Fahrenheit: ");
scanf("%lf",&c_temperature);

converted_c_temp = (c_temperature * 1.8) + 32;
printf("The temperature is %.lf degrees Fahrenheit\n",converted_c_temp);

printf("Enter a temperature in Fahrenheit that you want in Celsius: ");
scanf("%lf",&f_temp);

converted_f_temp = (f_temp - 32)/1.8;
printf("The temperature is %.lf degrees Celsius",converted_f_temp);

    return 0;
}