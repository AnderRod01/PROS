#include <stdlib.h>
#include <unistd.h> // Para pid_t
#include <stdio.h>

void main (){
    pid_t pid;
    pid=fork();

    if (pid == -1){
        printf ("No se ha podido crear el proceso hijo");
        exit(-1);
    }
    if (pid == 0){
        printf ("Soy el proceso hijo \n\t Mi PID es %d, El PID de mi padre es %d.\n", getpid(), getppid());
    }else{
        printf ("Soy el proceso padre \n\t Mi PID es %d, el PID de mi padre es %d. \n\t Mi hijo: %d termino. \n", getpid(), getppid(), pid);
        
    }
    exit (0);
}