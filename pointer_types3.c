#include <stdio.h>

int main() {

  int i; 
  char char_array[5] = {'a','b','c','d','e'}; 
  int int_array[5] = {1,2,3,4,5};

  char *char_pointer;
  int *int_pointer; 
  
  /*done on purpose to prove the point of pointer arithmetic 
   * the below (type cast) commented out or left in still works , 
   * but if left in no compiler warnings),
   * compare to the two */
  char_pointer = (char *) int_array;  
  int_pointer = /*(int *)*/ char_array;

  for(i=0; i < 5; i++) {
    printf("[integer pointer] points to %p, which contains the char %c\n",
            int_pointer, *int_pointer);
    int_pointer = (int *) ((char *) int_pointer + 1); 
  }

  for(i=0; i < 5; i++) {
    printf("[char pointer] points to %p, which contains the int %d\n",
            char_pointer, *char_pointer);
  /* the below commented out or left in still works , 
   * but if left in no compiler warnings),
   * compare to above for loop */
    char_pointer = /*(char *)*/ ((int *) char_pointer + 1); 
  }

return 0; 
}
