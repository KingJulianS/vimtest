#include <stdio.h>

int main() {

  int i; 
  char char_array[5] = {'a','b','c','d','e'}; 
  int int_array[5] = {1,2,3,4,5};

  char *char_pointer;
  int *int_pointer; 
  
  char_pointer = int_array;  
  int_pointer = char_array;

  for(i=0; i < 5; i++) {
    printf("[integer pointer] points to %p, which contains the char %c\n",
            int_pointer, *int_pointer);
    int_pointer = int_pointer + 1; 
  }

  for(i=0; i < 5; i++) {
    printf("[char pointer] points to %p, which contains the int %d\n",
            char_pointer, *char_pointer);
    char_pointer = char_pointer + 1; 
  }

  *(char_pointer - 2) = '9';

    printf("[integer pointer] points to %p, which contains the integer %c\n",
            (char_pointer - 2), *(char_pointer -2));

return 0; 
}
