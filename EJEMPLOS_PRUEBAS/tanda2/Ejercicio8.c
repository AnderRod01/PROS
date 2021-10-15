#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void main (){
    pid_t pidHijo, pidNieto;
    int fd1[2], fd2 [2];
    char buffer [80];
    pipe (fd1);
    pidHijo = fork();
    if (pidHijo==0){
        pipe (fd2);
        pidNieto= fork();
    }

    if (pidNieto==0){
       
        read (fd1[0], buffer, sizeof(buffer));              //Nieto recibe
        printf("\t\tEl NIETO recibe mensaje del padre: %s\n", buffer);

        printf("\t\tEl NIETO envia un mensaje al PADRE\n");         //Nieto envia
        write (fd2[1], "Saludo del nieto...", sizeof(buffer));
        
    } else{

        if (pidHijo==0){
            read (fd1[0], buffer, sizeof(buffer)); //Hijo recibe del abuelo
            printf("\tEl HIJO recibe mensaje del ABUELO: %s\n", buffer);

            
            write (fd1[1], "Saludo del padre...", sizeof(buffer));
            printf("\tEl HIJO envia un mensaje al NIETO\n"); //Hijo envia mensaje al nieto

            wait(NULL);

            read (fd2[0], buffer, sizeof(buffer)); //Hijo recibe del Nieto
            printf("\tEl HIJO recibe mensaje del NIETO: %s\n", buffer);


            write (fd2[1], "Saludo del padre...", sizeof(buffer)); //Hijo envia al Abuelo
            printf("\tEl HIJO envia+ un mensaje al ABUELO\n");

        } else{
            write (fd1[1], "Saludo del abuelo...", sizeof(buffer)); //Abuelo envia mensaje a hijo
            printf("El ABUELO envia un mensaje al HIJO\n");

            wait(NULL);

            read (fd2[0], buffer, sizeof(buffer));
            printf("\tEl ABUELO recibe mensaje del HIJO: %s\n", buffer);


        }

    
    }
}












    