#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char globca = 'a' ;
char globcb ; 
int globinta = 333 ;
int globintb ;

/*
 * note the first prototype using the array as a pointer notation(char * where) in the call  
 * however the second call uses the array notation(char where[]) for the same in the call 
*/
void *err_c_malloc(unsigned int memsize, char *where) ;
void free_malloc(void *vptr, unsigned int freesize, char where[]) ;

void *err_c_malloc(unsigned int memsize, char *where) {

    void *ptr ;

    printf("\t[+]Allocating %d bytes mem on heap for %s.\n", memsize, where) ;
    ptr = malloc(memsize) ;
    if(ptr == NULL) {
      fprintf(stderr, "Malloc error @%s\n", where) ;
      exit(-1) ;
    }

return ptr ;
}

void free_malloc(void *vptr, unsigned int freesize, char where[]) {
 
  printf("\t[-]Freeing %d bytes mem from heap for %s.\n", freesize, where) ;
  free(vptr) ;

return;
}

int main(int argc, char *argv[]) 
{
  
  char *char_ptr ; 
  int *int_ptr ;
  unsigned int mem_size ; 
  char where[20] = "start\0" ; 

  if(argc < 2) 
    mem_size = 50 ; 
  else 
    mem_size = atoi(argv[1]) ;

  /*
   * this glob(global variables was just done to see in GDB 
  */
  globca = 'b' ; 
  globcb = 'a' ;
  globinta = globinta + 111 ; 
  globintb = 333 ; 

  strcpy(where, "1st char\0") ; 
  char_ptr = (char *) err_c_malloc(mem_size, where) ;
  strcpy(char_ptr, "This is memory on the heap for ") ;  
  printf(" (%p) --> %s%s\n", char_ptr, char_ptr, where) ;
  
  strcpy(where, "1st int\0") ; 
  int_ptr = (int *) err_c_malloc(4, where) ;
  *int_ptr = 31337 ;
  printf(" %s (%p) --> %d\n ", where, int_ptr, *int_ptr) ;
  
  strcpy(where, "1st char\0") ;
  free_malloc((void *) char_ptr, mem_size, where) ;  

  strcpy(where, "2nd char \0") ;
  char_ptr = (char *) err_c_malloc(20, where);
  strcpy(char_ptr, "This is new mem on the heap for ") ;
  printf(" (%p) --> %s%s\n", char_ptr, char_ptr, where) ;
  free_malloc((void *) char_ptr, 20, where) ;

  strcpy(where, "1st int\0") ;
  free_malloc((void *) int_ptr, 4, where) ;

return 0;
}
