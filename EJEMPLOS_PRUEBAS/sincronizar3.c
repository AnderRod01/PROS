#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <stdbool.h>


bool funciona = true;

void gestionTermina (int signal){
    funciona=false;
    printf("\nAdiós\n");
}

void main (){
    while (funciona) {   
        printf ("Hey\n");
        sleep(1);
        signal(SIGINT, gestionTermina);
    }
    exit(0);
}
