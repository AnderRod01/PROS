#define _DEFAULT_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>


int main (void)
{
	int fp;
	int p, bytesleidos;
	char saludo[] = "Un saludo !!!!!\n";
	
    p=mknod("FIFO2", S_IFIFO|0666, 0); /// creamos FIFO con permisos de lectura y escritura. 
         //Como el FIFO se crea en el archivo de escritura, habria que ejecutar este en primer lugar
  
    fp = open ("FIFO2", 1); /// abrimos fifo con permiso de escritura
	

    if (fp == -1) {
		printf("Error al abrir el fichero... \n");
 		exit (1);
	}


	printf("Mandando información al FIFO...\n");
	write (fp, saludo, sizeof(saludo)); 	//Escribimos el mensaje en el FIFO
	close (fp);
	return(0);
}