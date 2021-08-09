#include <stdio.h>

int main(int argc, char *argv[]) {
 
  int *ptr; 
  printf("The 'int' data type is\t\t %d bytes in size.\n", sizeof(int));
  printf("The 'short int' data type is\t %d bytes in size.\n", sizeof(short));
  printf("The 'long int' data type is\t %d bytes in size.\n", sizeof(long));
  printf("The 'long long int' data type is %d bytes in size.\n", sizeof(long long));
  printf("The 'float' data type is\t %d bytes in size.\n", sizeof(float));
  printf("The 'char' data type is\t\t %d bytes in size.\n", sizeof(char));
  printf("The 'unsigned int' data type is\t %d bytes in size.\n", sizeof(unsigned int));
  printf("The 'pointer C' data type is\t %d bytes in size.\n", sizeof(char *));
  printf("The 'pointer I' data type is\t %d bytes in size.\n", sizeof(int *));

return 0;
} 
