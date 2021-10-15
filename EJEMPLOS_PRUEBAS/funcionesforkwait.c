#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

void main () {
    pid_t pid, hijo_pid;
    if (pid==-1){
        printf ("Error");
        exit (-1);
    }
    if (pid == 0){
        printf ("Soy el proceso hijo \n\t Mi PID es %d, el PID de mi padre es %d. \n", getpid(), getppid());

    } else{
        hijo_pid=wait(NULL);
        printf ("Soy el proceso padre \n\t Mi PID es %d, el PID de mi padre es %d. \n\t Mi hijo : %d termino \n", getpid(), getppid(), pid);
    }
    exit (0);
}