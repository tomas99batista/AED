//
// Tomás Oliveira e Silva, AED, September 2014, September 2017
//
// program to print a table of the squares and square roots of some integers
//
// on GNU/Linux, run the command
//   man 3 printf
// to see how the manual page of the printf function

//Modify the program to print the sine and cosine of the angles 0, 1, 2, . . . , 90 (in degrees) and to place the output in a file named table.txt.
//Hints:
// • Use the help system (on GNU/Linux use the command man) to study how the formatting string of the printf
// function is specified. Study also the functions fopen, fclose and fprintf.

// • The argument of the sin and cos functions are in radians; the value of π is given by the symbol M_PI, which
// is defined in math.h. To convert from degrees to radians multiply the angle by M_PI/180.0.

#include <math.h>
#include <stdio.h>

void do_it(int N)
{
  int i;
  file = fopen("table.txt", "w");
  printf(" angle      sine      cos\n");
  printf("-- --- -----------------\n");
  for(i = 1;i <= N;i++)
    printf("%2d %3d %17.15f\n",i,i * i,sqrt((double)i));
}

int main(void)
{
  do_it(90);
  return 0;
}
