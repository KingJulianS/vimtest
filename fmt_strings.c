#include <stdio.h>
#include <string.h>

int main() {

  char string[10]; 
  int a = -73;
  unsigned int b = 73; 

  strcpy(string, "sample");
  
  printf("[a] Dec: %d Hex: %x Unsigned: %u\n", a,a,a);  
  printf("[b] Dec: %d Hex: %x Unsigned: %u\n", b,b,b);  
  printf("field width [b u] 3: '%3u', 10: '%010u', 8: '%8u'\n", b,b,b);  
  printf("[string content] '%s' adress of string '%p'\n", string, string);
  printf("[Adress of a] '%p'\n", &a);

return 0;
}
