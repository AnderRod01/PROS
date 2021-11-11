package actividad14;

public class Actividad14 extends Thread { 
	public static void main(String args[]) {
		
		Recurso a = new Recurso(); 
		Recurso b = new Recurso(); 
		//Se cambia el orden en el que se acceden a los recursos para evitar el deadlock
		Hilo h1 = new Hilo(b, a, "uno"); 
		Hilo h2 = new Hilo(b, a, "dos"); 
		//Ejecutamos los hilos
		h1.start(); 
		h2.start(); 
	}
}
