#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "strcmpOrder.h"


void strcmpOrder(char** a)
{
  int i;
  int j;
  int k;
  int counter = 0;
  char** temp;
  for(j = 0; a[j] != NULL; j++)
    {
      counter++;
    }
  for(k = 0; k < counter; k++)
    {
      for(i = 0; i < counter-1; i++)
	{
	  if(strcmp(a[i],a[i+1]) > 0)
	    {
	      temp = a[i];
	      a[i] = a[i+1];
	      a[i+1] = temp;
	    }
	}
    }
}
