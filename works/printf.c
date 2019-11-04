/* printf example */
#include <stdio.h>

int main()
{
//float a=1.23456, b=7.8901, c=34.5435;
float a, b, c;

 printf("Dear user, please, enter first number: ");
 scanf("%f",&a);
 printf("Dear user, please, enter second number: ");
 scanf("%f",&b);
 printf("Dear user, please, enter third number: ");
 scanf("%f",&c);


 printf("floats: %3.1f %8.4f, %6.4f \n", a, b, c);
 printf("floats: %4.2f %6.3f, %9.5f \n", a, b, c);
 printf("floats: %4.3f %4.2f, %11.6f \n", a, b, c);

 // write cod to show:
/*
cmd:>gcc printf_tests.c
cmd:>a.out
1.2     7.89012 34.5678
1.23    7.8901  34.56780
1.23456 7.890   34.567800
cmd:>
*/
 // rule - don't use (put) spaces " "!!!

}
