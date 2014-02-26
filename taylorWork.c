#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "taylorWork.h"

void toUpper(char** a)
{
  int i = 0;
  int j = 0;
  for (i=0; a[i] != NULL; i++)
    {
      for(j = 0; a[i][j] != '\0'; j++)
	{
	  if(a[i][j] >=97 && a[i][j] <=122)
	    {
	      a[i][j] = a[i][j] - 32;
	    }
	}
    }
  return;
}

void reverse(char** a)
{
  
  int length;
  char p;
  char temp;
  int i = 0;
  int j= 0;
  int s=0;;
  for(i = 0; a[i] != NULL; i++)
    {
      length = strlen(a[i]);
      j = length-1;
      s = 0;
      while(s < j)
	{
	  temp = a[i][s];
	  p= a[i][j];
	  a[i][s] = p;
	  a[i][j] = temp;
	  s++;
	  j--;
	}
    }
}

char* trimHelp(char* a)
{
  int s =0;
  int t=0;
  int r = 0;
  while((a[t] == ' ' || a[t] == '\t')&& a[t] != '\0')
  {
      s++;
      t++;
  }
  int j = s;
  for(r = 0; r <= s; r++)
   {
     a[r] = a[j++];
   }
  return a;
}

void trim(char** a)
{
  int i = 0;
  for(i; a[i] != NULL; i++)
    {
      trimHelp(a[i]);
    }
}

