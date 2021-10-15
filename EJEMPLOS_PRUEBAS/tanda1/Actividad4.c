#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void main () {
    pid_t pid, pidHijo1, pidHijo2, pidHijo3;


    //Creacion del primer hijo
    pid= fork();
    if (pid==-1){
        printf ("No se ha podido crear el proceso hijo");
        exit(-1);
    }
    if (pid==0){ //Hijo 1
        printf("Soy el hijo 1, Mi padre es %d y mi PID es %d\n", getppid(), getpid());
        
        exit(0);
    }
   


    //Creacion del segundo hijo
    pid= fork();
    if (pid==-1){
        printf("No se ha podido crear el proceso hijo");
        exit(-1);
    }
    if (pid==0){ //Hijo 2
        printf("Soy el hijo 2, Mi padre es %d y mi PID es %d\n", getppid(), getpid());
       
        exit(0);
    }
    


    //Creacion del tercer hijo
    pid= fork();
    if (pid==-1){
        printf ("No se ha podido crear el proceso hijo");
        exit(-1);
    }
    if (pid==0){ //Hijo 3
        printf("Soy el hijo 3, Mi padre es %d y mi PID es %d\n", getppid(), getpid());
        
    }else{ //padre
        pidHijo1= wait(NULL);
        pidHijo2= wait(NULL);
        pidHijo3= wait(NULL);
        printf("Proceso padre %d\n", getpid());
    }
    exit(0);
    


}