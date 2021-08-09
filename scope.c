#include <stdio.h>
#include <stdlib.h>

void func3(void);
void func2(void);
void func1(void); 

void func3(void) {

  int i = 11; 
  printf("in func 3\t\t i = %d\n", i);

/*interesting exit means it exit and doe not return to the caller 
 * exit(EXIT_SUCCESS);
 */
return;
}
void func2(void) {

  int i = 7; 
  printf("in func 2\t\t i = %d\n", i);
  func3();
  printf("back in func 2\t\t i = %d\n", i);

/*interesting exit means it exit and doe not return to the caller 
 * exit(EXIT_SUCCESS);
 */
return;
}
void func1(void) {

  int i = 5; 
  printf("in func 1\t\t i = %d\n", i);
  func2();
  printf("back in func 1\t\t i = %d\n", i);

/*interesting exit means it exit and doe not return to the caller 
 * exit(EXIT_SUCCESS);
 */
return;
}
int main(int argc, char *argv[]) {

  int i = 3; 
  printf("in main\t\t\t i = %d\n", i);
  func1();
  printf("back in main\t\t i = %d\n", i);

exit(EXIT_SUCCESS);
}
