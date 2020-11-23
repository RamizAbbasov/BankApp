/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n;
  int m;
  int count;
  printf ("Please enter n and m");
  scanf ("%d", &n);
  scanf ("%d", &m);
  if (n < m)
    {
      while (n <= m)
	{
	  if (n % 2 == 0)
	    //printf ("%d", n);
	    count++;
	  n++;
	}
    }
  else
    {
      printf ("Please enter again");

    }
  printf ("%d", count);
  return 0;
}
