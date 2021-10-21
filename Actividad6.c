#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

void main () {
   
    pid_t pid1, pid2, pid3;
    pid1 = fork(); //Creamos el hijo 1


    if (pid1 == -1){//Error al crear el proceso
        printf("No se ha podido crear el proceso hijo...");
        exit (-1);

    }else if(pid1 == 0){ //En el proceso hijo 1
        printf("Soy el hijo 1, Mi padre es %d y mi PID es %d\n", getppid(), getpid());

    }else{  //En el proceso padre
        wait(NULL);
        pid2 = fork(); //Creamos el hijo 2
        
        if (pid2 == -1){//Error al crear el proceso
            printf("No se ha podido crear el proceso hijo...");
            exit (-1);

        }else if(pid2 == 0){ //En el proceso hijo 2
            printf("Soy el hijo 2, Mi padre es %d y mi PID es %d\n", getppid(), getpid());
            
            wait(NULL);
            pid3 = fork();  //Creamos el hijo 3
            if (pid3 == -1){//Error al crear el proceso
                printf("No se ha podido crear el proceso hijo...");
                exit (-1);
            }else if(pid3 == 0){//En el proceso hijo
                printf("Soy el hijo 3, Mi padre es %d y mi PID es %d\n", getppid(), getpid());
            }else{
                wait(NULL);
                exit (0);
            }
        }
    }
}

