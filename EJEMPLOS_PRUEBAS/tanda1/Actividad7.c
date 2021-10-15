#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

void main (){
    pid_t pid;
    int num=6;

    printf("Valor inicial de la variable: %i\n", num);

    pid=fork();
    if (pid==0){
        num=num-5;
        printf("Variable en el proceso hijo: %i\n", num);
    }else{
        num=num+5;
        printf("Variable en el proceso padre: %i\n", num);
    }
    exit(0);
}