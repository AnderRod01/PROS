package actividad5;

public class Actividad5 {
	public static void main(String[] args) {
		
		//Creamos los hilos
		Thread p = new Thread(new Primero());
		Thread s = new Thread (new Segundo());
		
		//Los ejecutamos
		p.start();
		s.start();
		
		System.out.println("Fin del programa");
	}
}
