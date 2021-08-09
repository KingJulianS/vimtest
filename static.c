#making arbitrary change to test got for got scm.com book 
#include <stdio.h>
#include <stdlib.h>

void function(void);

void function(void) {

  int var = 5; 
  static int static_var = 5; 

  printf("\t in function var @ %p = %d\n", &var, var);
  printf("\t in function static_var @ %p = %d\n", &static_var, static_var);
  var ++;
  static_var ++;

return;
}

int main(int argc, char *argv[]) {

  int i; 
  static int static_var = 1337; 

  for (i = 0; i < 5; i++) {
    printf("\t in main loop %02d static_var @ %p = %d\n", i, 
          &static_var, static_var);
    function(); 
  }
  
exit(EXIT_SUCCESS);
} 
