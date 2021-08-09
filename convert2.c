#include <stdio.h> 
#include <stdlib.h>
#include <errno.h>

void usage(char *pgm_name); 
long con_strtol(char *nr_str, char *pgm_name);

void usage(char *pgm_name) {
     
  printf("Usage : %s " 
          "<message> <nr of time to repeat message>\n"
           , pgm_name);
exit(EXIT_FAILURE);
} 
  
long con_strtol(char *nr_str, char *pgm_name) {

  char *endptr,
       *str;
  long ret_val;
  char **testptr;

  testptr = &endptr;
  errno = 0; 
  str = nr_str;

  /* both works just testing understnading */
  ret_val = strtol(str, testptr, 10); 
  /*ret_val = strtol(str, &endptr, 10);*/ 

  if (errno != 0) {
    perror("strtol"); 
    exit(EXIT_FAILURE);
  }

  if (endptr == str) {
 /*   fprintf(stderr, "#strtol: invalid nr in 2nd argument\n");*/
    printf("#strtol: invalid nr in 2nd argument\n");
    usage(pgm_name);
  }
  
  if (*endptr != '\0') { 
    printf("#strtol : warning - extra non digits in 2nd argument"
            " ignored\n");
    printf("#strtol : %s\n", endptr); 
  }
        
return ret_val;
} 


int main(int argc, char *argv[]) {

  int i, count;

 /* comment out this if to test seg fault in gdb */
 /* if (argc < 3) {
    usage(argv[0]);
  }
 */
  count = (int) (con_strtol(argv[2], argv[0]));
  
  for (i=0; i < count; i++) {
    printf("%3d - %s.\n", i + 1, argv[1]); 
  }

exit(EXIT_SUCCESS);
}
