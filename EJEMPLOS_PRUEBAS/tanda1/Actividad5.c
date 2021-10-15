#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void main (){
    pid_t pid;
    int cont=1;

    pid=fork(); //Creacion del primer hijo

    while (cont <=10)
    {
        if (pid == 0){ //Dentro del hijo, crear otro
            printf("Soy el hijo %d, Mi padre es %d y mi PID es %d\n", cont,getppid(), getpid());
            pid=fork();
        }else{ //En el padre, 
            pid=wait(NULL);
        }
        cont++;
    }
    exit(0);
}