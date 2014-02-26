#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "readLine.h"
#include "execCmds.h"

// print the elements in the array, up to (but not including) the first
// NULL entry
void printLines(char** a) {
  int i;
  for (i = 0; a[i] != NULL; i++) {
    printf("%s\n", a[i]);
  }
}

//reverseLines
void reverseLines(char** a) {
  int i;
  int j;
  char** temp;
  for (i = 0; a[i] != NULL; i++);

  for (j = 0; j < (i/2); j++) {
      temp = a[i-j-1];
      a[i-j-1] = a[j];
      a[j] = temp;
  }
}

// remove consecutive identical lines
 void removeIdent(char** a){
   int i;
   int j;
   for (i = 1; a[i] != NULL; i++){
     if(strcmp(a[i], a[i-1]) == 0){
       for(j=i; a[j+1] != NULL; j++) {
	 a[j] =a[j+1];
       }   
       a[j] = NULL;
     }
   }
   printf("\n");
}

// our array that tells how command-strings map to functions
commandMap map[] = {
  {"-p", printLines},
  {"-r", reverseLines},
  {"-i", removeIdent},
  {NULL, NULL},
};

// main function
int main(int argc, char* argv[]) {
  // read lines from standard input
  char** lines = readLines();

  // execute each command on the command line
  executeCommands(lines, map, argv);

  // exit with "success"
  return EXIT_SUCCESS;
}
