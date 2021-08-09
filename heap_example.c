#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
  char *char_ptr ; 
  int *int_ptr ;
  int mem_size ; 

  if(argc < 2) 
    mem_size = 50 ; 
  else 
    mem_size = atoi(argv[1]) ;

  printf("\t[+]Allocating %d bytes mem [c] on heap for char ptr.\n", mem_size) ;
  char_ptr = (char *)malloc(mem_size) ;
  if(char_ptr == NULL) { 
    fprintf(stderr, "[c] Error allocating heap mem.\n") ; 
    exit(-1) ; 
  }  

  strcpy(char_ptr, "This is memory [c] on the heap.") ;  
  printf("char_ptr (%p) --> %s\n", char_ptr, char_ptr) ;
  
  printf("\t[+]Allocating %d bytes mem [i] on heap for int ptr.\n ", 4) ;
  int_ptr = (int *)malloc(4) ;
  if(int_ptr == NULL) {
    fprintf(stderr, "[i] error allocating heap mem.\n") ;
    exit(-1) ;
  }
  
  *int_ptr = 31337 ;
  printf("int ptr (%p) --> %d\n ", int_ptr, *int_ptr) ;
  
  printf("[-]Freeing %d bytes mem [c] from heap.\n", mem_size) ;
  free(char_ptr) ;

  printf("[+]Allocating another %d bytes mem [c] on heap for char_ptr.\n", 20) ;
  char_ptr = (char *) malloc(20);
  if (char_ptr == NULL) {
    fprintf(stderr, "Error allocating new [c] mem") ;
    exit(-1) ;
  }

  strcpy(char_ptr, "This is new mem [c]") ;
  printf("char_ptr (%p) --> %s\n", char_ptr, char_ptr) ;

  printf("\t[-]Freeing %d bytes mem [c] from heap.\n", 20) ;
  free(char_ptr) ;

  printf("\t[-]Freeing %d bytes mem [i] from heap.\n", 4) ;
  free(int_ptr) ;

return 0;
}
