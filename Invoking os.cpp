	#include <stdio.h>
	#include <stdlib.h>
	#include <sys/types.h>
	#include <unistd.h>
	int main(void) {
	  pid_t pid ;
	 
	  if(pid == 0) {
	    printf("Child => PPID: %d PID: %d\n", getpid());
	    exit(EXIT_SUCCESS);
	  }
	  else if(pid > 0) {
	    printf("Parent => PID: %d\n", getpid());
	    printf("Waiting for child process to finish.\n");   
	    printf("Child process finished.\n");
    }
	  else {
    printf("Unable to create child process.\n");
	  }	 
	  return EXIT_SUCCESS;
	}	 

