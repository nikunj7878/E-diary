#include <stdio.h>

void main()
  {
  int number3, number4;
  printf ("Dear user, please enter number 3:");
  scanf ("%d", & number3);
  printf ("Dear user, please enter number 4:");
  scanf ("%d", & number4);

  if (number3 > number4)
   printf ("Your first number%d is> than the second number%d\n", number3, number4);
  printf ("This text will appear anyway\n");

  if (number3 > number4)
   {
   printf ("Still your 3rd number%d is> than 4th number%d\n", number3, number4);
   printf ("But this text will not appear anyway\n");
   }
  }

