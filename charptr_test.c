#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  /* 
   * testing something quick
   * technically all these should be just sime slight diff of 
   * creating and using string via char and char * and [] 
   * oh and then also just checking a int cast to char * array
  */
  char kj_argv_01 = 'a',
       kj_argv_02 = 'b', 
       kj_argv_03 = 'c',
       kj_argv_04 = '\0';
  char kj_argv_2[4] = {'x','y','z','\0'};
  char kj_argv_4[4] = {"mno\0"};
  char *kj_argv_3[4];
  int kj_argi = 2;
  
  /*this is the test of  cast into char * array */
  printf("char kj_argv_3[0] is @%p\n", kj_argv_3);
  kj_argv_3[0] = (char *) &kj_argi;
  printf("kj argv_3 0 set to adress of int = %p\n", kj_argv_3);
  printf("kj argv_3 0 = %d\n", (int) *kj_argv_3[0]);
  
  /*this is the test of the 3 strings*/
  kj_argv_3[0] = &kj_argv_01;
  kj_argv_3[1] = kj_argv_2;
  kj_argv_3[2] = &kj_argv_4[0];

  /* 
   * interesting the abc test will pront it out but upside down 
   * i.e. cba... because it allocates like that hence using -1 i.s.o +1
  */
  printf("adress of kj_argv 01 a of abc is @%p\n", &kj_argv_01);
  printf("adress of kj_argv 02 b of abc is @%p\n", &kj_argv_02);
  printf("adress of kj_argv 03 c of abc is @%p\n", &kj_argv_03);
  printf("adress of kj_argv 04 end s of abc is @%p\n", &kj_argv_04);
  printf("char kj_argv_3[0] abc is @%p = %s\n", kj_argv_3[0], kj_argv_3[0]);
  printf("char &kj_argv 01 abc = %s\n", &kj_argv_01);
  printf("char &kj_argv 01 abc - 1 adress of = %s\n", &kj_argv_01 - 1);
  printf("char &kj_argv 01 abc - 1 index     = %s\n", (kj_argv_3[0] - 1));
  printf("char &kj_argv 01 abc - 2 adress of = %s\n", &kj_argv_01 - 2);
  printf("char &kj_argv 01 abc - 2 index     = %s\n", (kj_argv_3[0] - 2));
  printf("char &kj_argv 01 abc - 3 adress of = %s\n", &kj_argv_01 - 3);
  printf("char &kj_argv 01 abc - 3 index     = %s\n", (kj_argv_3[0] - 3));
  
  /*the other two strings of the test */
  printf("adress of kj_argv 2 xyz is @%p\n", kj_argv_2);
  printf("char kj_argv_3[1] xyz is @%p = %s\n", kj_argv_3[1], kj_argv_3[1]);
  printf("adress of kj_argv 4 mno @%p\n", &kj_argv_4[0]);
  printf("char kj_argv_3[2] mno is @%p = %s\n", kj_argv_3[2], kj_argv_3[2]);
  
exit(EXIT_SUCCESS);
} 
