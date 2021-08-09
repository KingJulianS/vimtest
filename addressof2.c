#include <stdio.h>

int main() {

  int int_var = 5;
  int *int_ptr;
  int bytes = 0;
  int *bytes_written; 

  bytes_written = &bytes;
  int_ptr = &int_var;
  
  printf("int_ptr  = 0x%08x\n", int_ptr);
  printf("&int_ptr = %08p\n", &int_ptr);
  printf("*int_ptr = %d\n" , *int_ptr);
  printf("int_var is located at 0x%08x\n", &int_var);
  printf("int_var contains %d\n", int_var);
  printf("int_ptr is located at %08p\n", &int_ptr);
  printf("int_ptr contains 0x%08x\n", int_ptr);
  printf("int_ptr points to %d\n %n", *int_ptr, bytes_written);
  printf("There were %d bytes written above\n", *bytes_written);
  
return 0;
}
