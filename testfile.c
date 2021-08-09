#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char col[30];
	char col1[12];
  char col2[6];
  char col3[7];
  float str_to_float;
  
  strcpy(col, "hello world!10.99!,thanks    "); 
	printf("CoL : %s \n",col); 

  strncpy(col1, col, 11);
  col1[11] = '\0';
	printf("Col1 : %s \n",col1); 

  strncpy(col2, col + 12, 5);
  col2[5] = '\0';
	printf("Col2 : %s \n",col2); 

  strncpy(col3, col + 19, 6);
  col3[6] = '\0';
	printf("Col3 : %s \n",col3); 

  str_to_float = strtod(col2,NULL);
  printf("str to float : %.2f\n", str_to_float); 

  /*
  FILE* f = fopen("file1.txt", "r");
	fscanf(f,col2);
	printf("%s", col2);
	fscanf(f,col2);
	printf("%s", col2);
	fclose(f);
  */

return 0;
}
