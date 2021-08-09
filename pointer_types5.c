#include <stdio.h>

int main() {

  int i; 
  char char_array[5] = {'a','b','c','d','e'}; 
  int int_array[5] = {1,2,3,4,5};

  /* just as example replace pointer with an unsigned int and 
   * use it as pointer was used in this snippet */  
  /* noted previously that on this architecture pointer type is 8 bytes not 4, 
   * hence had to use unsigned long int which is 8 bytes */  
  
  /*void *void_pointer;*/ 
  unsigned long int hacky_pointer;
  
  /*void_pointer = (void *) int_array;*/
  hacky_pointer = (unsigned long int) int_array;

  for(i=0; i < 5; i++) {
    printf("[integer pointer] points to %p, which contains the int %d\n",
            /*void_pointer, *((int *) void_pointer));*/
            hacky_pointer, *((int *) hacky_pointer));
    /*you can use either of the below two stmts, they work the same..
     * 1 is to multi cast so it knows how much to add based on type, in
     * this case we cast to int so it adds 4... 
     * 2 in the second version we simply add the right size using sizeof.
     * also see how char is handled after this as exmaple..
     */

    /*void_pointer = (void *) ((int *) void_pointer + 1);*/ 
    /*void_pointer = (void *) void_pointer + sizeof(int);*/ 
    hacky_pointer = hacky_pointer + sizeof(int); 
  }

  /*void_pointer = (void *) char_array;*/
  hacky_pointer = (unsigned long int) char_array;

  for(i=0; i < 5; i++) {
    printf("[char pointer] points to %p, which contains the int %c\n",
            /*void_pointer, *((char *) void_pointer));*/
            hacky_pointer, *((char *) hacky_pointer));
    /*you can use either of the below two stmts, they work the same..
     * 1 is to multi cast so it knows how much to add based on type, in
     * this case we cast to char so it only adds 1... 
     * 2 in the second version we simply add the right size using sizeof.
     * also see how int is handled before this loop as exmaple..
     */

    /*void_pointer = (void *) ((char *) void_pointer + 1);*/ 
    /*void_pointer = (void *) void_pointer + sizeof(char);*/ 
    hacky_pointer = hacky_pointer + sizeof(char); 
  }

return 0; 
}
