#include <stdio.h> 

int main (int argc, char *argv[]) {
  
  int i; 

  printf("There were %d arguments.\n", argc);
  for (i = 0; i < argc; i++) {
    printf("Argument #%2d\t -\t%s\n", i, argv[i]);
  }  

return 0; 
} 
