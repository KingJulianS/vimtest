#include <stdio.h>
#include <string.h>

int main(){
  char str_a[20];
  /*added this just to force a breakpoint pre and post strcpy
   * else it starts at strcpy in gdb */
  int i=0;
  
  i++;
  strcpy(str_a, "Hello, world!\n");
  i++;  
  
  printf(str_a);

return 0; 
}
