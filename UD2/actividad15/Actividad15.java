package actividad15;

public class Actividad15 {
	public static void main(String[] args) {
		
		//Creacion de Hilos
		Hilo hilo1 = new Hilo();
		Hilo hilo2 = new Hilo();
		Hilo hilo3 = new Hilo();
		
		//Nombres de los hilos
		hilo1.setName("Hilo 1");
		hilo2.setName("Hilo 2");
		hilo3.setName("Hilo 3");
		
		//Ejecucion de los hilos
		hilo1.start();
		hilo2.start();
		hilo3.start();
		
		//fin del programa
		System.out.println("Fin del programa");
	}
}
