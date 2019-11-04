/* printf example */
#include <stdio.h>

int main()
{
   printf ("Characters: %c %c \n", 'a', 65);
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   printf ("Preceding with zeros: %010d \n", 1977);
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 5, 10);
   printf ("%s \n", "A string");
   return 0;

 float a=1.23456, b=7.89012, c=34.5678;
 printf ("floats: %3.1f %8.4f %6.4f \n", a, b, c);
 printf ("floats: %4.2f %6.3f %9.5f \n", a, b, c);
 printf ("floats: %4.3f %4.2f %11.6f \n", a, b, c);

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
