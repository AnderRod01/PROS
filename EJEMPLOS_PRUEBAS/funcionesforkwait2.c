#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

void main () {
    pid_t pid, hijo_pid, pid2, hijo_pid2;
    pid=fork();
    if (pid==-1){
        printf ("error");
        exit (-1);

    }

    if (pid==0){ //EN PROCESO HIJO
        pid2=fork (); //COMO EL HIJO SE CREA EL NIETO
        switch (pid2)
        {
        case -1:
            printf ("No se ha podido crear el proceso nieto");
            exit (-1);
            break;
        case 0:
            printf ("Soy el proceso NIETO \n\t Mi PI es %d, el PID de mi padre es %D. \n", getpid(), getppid());
        default: //PROCESO PADRE (ES EL HIJO)
            hijo_pid2 = wait (NULL);
            printf ("Soy el proceso hijo \n\t Mi PID es %d, el PID de mi padre es %d \n\t Mi hijo %d termino \n", getpid(), getppid(), hijo_pid2);
            
        }
    }else{
        hijo_pid= wait(NULL);
        printf ("Soy el proceso padre \n\t Mi PID es %d, el PID de mi padre es %d \n\t Mi hijo %d termino \n", getpid(), getppid(), pid);
    }
}