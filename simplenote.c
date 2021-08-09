#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <gnu/libc-version.h> 


void usage(char *prog_name, char *filename) { 
  printf("Usage : %s <data to add to %s>\n", prog_name, filename) ;
  exit (0); 
}

void fatal(char *) ; 
void *ec_malloc(unsigned int) ;

int main(int argc, char *argv[]) 
{
  /*
  *just added this to check glibc version. note include libc-version.h
  */
  printf("glibc version: %s\n", gnu_get_libc_version()) ;
    
  int fd ;
  char *buffer, *datafile ;

  buffer = (char *) ec_malloc(100) ;
  datafile = (char *) ec_malloc(50) ; 
  strcpy(datafile, "/home/juju/Desktop/CS/C/exc/KANDR/HTAOE/notes1") ; 

  if (argc < 2) 
    usage(argv[0], datafile) ;
  
  strcpy(buffer, argv[1]) ;
  
  printf("[DEBUG] buffer @ %p : \' %s \'\n", buffer, buffer) ;
  printf("[DEBUG] datafile @ %p : \' %s \'\n", datafile,datafile) ;

  strncat(buffer, "\n", 1) ;

  fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, 0666) ;
  if (fd == -1 ) 
    fatal("in main() file open err") ;
  printf("[DEBUG] fd @ %p : \' %d \'\n", &fd, fd) ;

  if(write(fd, buffer, strlen(buffer)) == -1) 
   fatal("in main() file write err") ;
  
  if(close(fd) == -1)
    fatal("in main file close err") ;

  printf("Note has been saved.\n") ;
  free(buffer) ;
  free(datafile) ; 

return 0 ;
}

void *ec_malloc(unsigned int mem_size) {

  void *ptr_size ; 

  ptr_size = malloc(mem_size) ;
  if (ptr_size == NULL)
      fatal("in ec_malloc() on memory allocation") ;
  
return ptr_size ;
}
void fatal(char *msg) {
  
  char error_msg[100] ; 

  strcpy(error_msg, "!! Fatal error ") ;
  strncat(error_msg, msg, 83) ;
  perror(error_msg) ;  

exit(-1) ;
}
