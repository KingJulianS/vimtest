#include <stdio.h>
#include <string.h>

int main(){
  char str_a[20];
  /*added this just to force a breakpoint pre and post strcpy
   * else it starts at strcpy in gdb */
  unsigned int ui = 0;
  signed int si = 0;     
 
  ui++;
  si--;

return 0; 
}
