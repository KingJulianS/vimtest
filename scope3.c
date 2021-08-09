#include <stdio.h>
#include <stdlib.h>

void func3(void);
void func2(void);
void func1(void); 

int j = 42; /*global variable*/

void func3(void) {

  int i = 11, 
      j = 999; /* j is local to func3 only */
  printf("in func 3\t\t i @ %p\t =%d\n", &i, i);
  printf("in func 3\t\t j @ %p\t =%d\n", &j, j);

/*interesting exit means it exit and doe not return to the caller 
 * exit(EXIT_SUCCESS);
 */
return;
}
void func2(void) {

  int i = 7; 
  printf("in func 2\t\t i @ %p\t =%d\n", &i, i);
  printf("in func 2\t\t j @ %p\t =%d\n", &j, j);
  printf("in func 2\t\t setting j = 1337\n");
  j = 1337;
  func3();
  printf("back in func 2\t\t i @ %p =%d\n", &i, i);
  printf("back in func 2\t\t j @ %p =%d\n", &j, j);

/*interesting exit means it exit and doe not return to the caller 
 * exit(EXIT_SUCCESS);
 */
return;
}
void func1(void) {

  int i = 5; 
  printf("in func 1\t\t i @ %p\t =%d\n", &i, i);
  printf("in func 1\t\t j @ %p\t =%d\n", &j, j);
  func2();
  printf("back in func 1\t\t i @ %p =%d\n", &i, i);
  printf("back in func 1\t\t j @ %p =%d\n", &j, j);

/*interesting exit means it exit and doe not return to the caller 
 * exit(EXIT_SUCCESS);
 */
return;
}
int main(int argc, char *argv[]) {

  int i = 3; 
  printf("in main\t\t\t i @ %p\t =%d\n", &i, i);
  printf("in main\t\t\t j @ %p\t =%d\n", &j, j);
  func1();
  printf("back in main\t\t i @ %p =%d\n", &i, i);
  printf("back in main\t\t j @ %p =%d\n", &j, j);

exit(EXIT_SUCCESS);
}
