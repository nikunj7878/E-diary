
#include<stdio.h> // we will use printf and scanf

void main() // main function is "entry point" and it should obligatory
 {
 char a='A';
 printf("a variable value as symbol: %c\n",a);
 printf("a variable value as decimal number: %d\n",a);
 printf("a variable value as octal number: %o\n",a);
 printf("a variable value as hexadecimal number: %x\n",a);

 char b=127;
 printf("b char variable value as decimal number (?127): %d\n", b);

 char c=128;
 printf("c char variable value as octal number (?128): %o\n", c);

 char d=129;
 printf("d char variable value as hexadecimal number (?129): %x\n", d);
 
// we use void main, because our main doesn't return
 
 printf("dear user, please enter any one symbol: ");
 scanf("%c",&a);
 printf("your selected value as symbol: %c\n", a);
 printf("your selected value as decimal number: %d\n", a);
 printf("your selected value as octal: %o\n", a);
 printf("your selected value as hexadecimal: %x\n", a);
 
}
