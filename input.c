#include <stdio.h>
#include <string.h>

int main() {

  char message[13]; 
  int count, i; 

  strcpy(message, "Hello world!");
  
  printf("Repeat how many time ?\n");
  scanf("%d", &count);

  for(i = 0; i < count; i++) {
    printf("%3d - %s\n", i + 1, message);
  }

return 0;
}
