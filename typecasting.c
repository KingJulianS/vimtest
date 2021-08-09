#include <stdio.h>

int main() {
  
  int a;
  int b; 
  float c;
  float d;
  double e;
  double f;
  double g;

  a = 13;
  b = 5;
  c = a / b; 
  d = (float) a / (float) b; 
  printf("[integer]\t\t a = %d \t b = %d\n", a, b);
  printf("[float vs int div]\t" 
         "c  = %f \t d = %f\n", c, d);
  
  /*just checking double compared to float above */ 
  f = 13; 
  g = 5; 
  e = f / g;
  printf("[double]\t\t f = %f \t g = %f\n", f, g);
  printf("[double div]\t" 
         "e = %f\n", e);

return 0;
}
