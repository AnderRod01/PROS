#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void main (){
    pid_t pid;

    int cont=1;
    
   
    while (cont <= 3){

        if (cont==2){
            pid=fork(); //Creacion hijo 2 
            if (pid == 0){ 
                printf("Soy el hijo %d, Mi padre es %d y mi PID es %d\n", cont,getppid(), getpid());
                pid=fork();//Creacion hijo 3 dentro de hijo 2
                cont++;
            } else{ 
                pid=wait(NULL);
            }
                
            if (pid == 0){ 
                printf("Soy el hijo %d, Mi padre es %d y mi PID es %d\n", cont,getppid(), getpid());
            }
            exit(0);

        } else{
            pid=fork();   //Creacion hijo 1
            if (pid==0){
                printf("Soy el hijo %d, Mi padre es %d y mi PID es %d\n",cont, getppid(), getpid());
                 
            }
            
        }
        cont++;
    }
    /*
    pid=fork();   //Creacion hijo 1
    if (pid==0){
        printf("Soy el hijo 1, Mi padre es %d y mi PID es %d\n", getppid(), getpid());

        exit(0);
    }
    cont++;


    
    pid=fork(); //Creacion hijo 2 
    if (pid == 0){ 
        printf("Soy el hijo %d, Mi padre es %d y mi PID es %d\n", cont,getppid(), getpid());
        pid=fork();//Creacion hijo 3 dentro de hijo 2
        cont++;
    } else{ 
        pid=wait(NULL);
    }
        
    if (pid == 0){ 
        printf("Soy el hijo %d, Mi padre es %d y mi PID es %d\n", cont,getppid(), getpid());
    }
    
    */
    //exit (0);
    
}