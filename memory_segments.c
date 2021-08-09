#include <stdio.h>
#include <stdlib.h>

int global_var;
int global_initialized_var = 5;

void function() { 
  
  int stack_var;
  int stack_var2 = 3;
  printf("notice even functions stack mem grow from high to low\n"); 
  printf("function's stack_var stack-seg at addr %p\n", &stack_var);
  printf("function's init stack_var2 stack-seg at addr %p\n", &stack_var2);

  return;
}

int main (){
  
  int stack_var;
  int stack_var2 = 4;
  static int static_intialized_var = 5; 
  static int static_var;
  int *heap_var_ptr;
  int *heap_var_ptr2;

  heap_var_ptr = (int *) malloc(4);
  *heap_var_ptr = 2;
  heap_var_ptr2 = (int *) malloc(4);

  printf("notice data-seg is lowest mem addr"); 
  printf(" & also grow from low to high\n"); 
  printf("global initialised var data-seg at addr %p\n", &global_initialized_var);
  printf("static initialised var data-seg at addr %p\n", &static_intialized_var);
  
  printf("notice bss seg mem addr is higher then data seg"); 
  printf(" & also grow from low to high\n"); 
  printf("global var bss-seg at addr %p\n", &global_var);
  printf("static var bss-seg at addr %p\n", &static_var);
  
  
  printf("notice heap mem grow from low to high\n"); 
  printf("heap var ptr heap-seg at addr %p\n", heap_var_ptr);
  printf("heap var2 ptr heap-seg at addr %p\n", heap_var_ptr2);
  
  printf("notice stack mem grow from high to low\n"); 
  printf("stack_var stack_seg at addr %p\n", &stack_var);
  printf("stack_var2 init stack_seg at addr %p\n", &stack_var2);

  printf("pointer value deref %d\n", *heap_var_ptr);

  function();

return 0;
}
