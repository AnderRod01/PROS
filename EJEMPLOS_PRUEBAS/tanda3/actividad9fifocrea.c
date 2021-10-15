#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main (void)
{
	int fp;
	int p, bytesleidos;
	char saludo[] = "Un saludo !!!!!\n", buffer [10];
	fp = open ("FIFO2", 0); /// abrimos fifo con permiso de lectura
	
	if (p== -1) {
		printf("Ha ocurrido un error: Recuerda borrar la pipe la proxima vez.... \n"); // recuerda borrarlo la segunda vez...
		exit (0);
	}

	while (1) {
		fp = open ("FIFO2", 0); //Abrimos el FIFO con permiso de lectura para leer proximos mensajes
		bytesleidos = read(fp, buffer, 1); 
		printf("Obteniendo información...\n"); 
		while (bytesleidos != 0) {  //recorremos el mensaje caracter a caracter y lo imprimimos por pantalla
			printf("%s", buffer);
			bytesleidos = read (fp, buffer, 1); 
	    }
	close (fp);
    }
    return(0);
}
