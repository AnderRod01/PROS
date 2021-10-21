package actividad4;

public class Actividad4 {
	public static void main(String[] args) {
		//Creacion de los 2 hilos
		Thread p = new Thread(new Hilo2());
		Thread s = new Thread(new Hilo2()); 
		
		//Les asignamos un nombre
		p.setName("Primero");
		s.setName("Segundo");
		
		//Los ejecutamos
		p.start();
		s.start();
		
		System.out.println("Fin del programa");
		
	}
}
