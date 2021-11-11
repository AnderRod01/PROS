package actividad10;

public class Actividad10 {
	public static void main(String[] args) {
		
		//Creamos el primer y segundo hilo
		Thread h1 = new Hilo("Hilo-prioridad 3");
		Thread h2 = new Hilo("Hilo-prioridad 7");
		
	

		/*h1.setName("Thread-0");
		h2.setName("Thread-1");*/
		
		//les asignamos las prioridades, no hace falta cambiarles el nombre, usaremos los que estan por defecto
		h1.setPriority(3);
		h2.setPriority(7);
		
		
		//Mostramos por pantalla el hilo actual (main) y su prioridad, ademas de la de los hilos que hemos creado
		System.out.println(Thread.currentThread().getName() + " tiene la prioridad "+ Thread.currentThread().getPriority());
		System.out.println(h1.getName() + " tiene la prioridad "+ h1.getPriority());
		System.out.println(h2.getName() + " tiene la prioridad "+ h2.getPriority());
		
		//Ejecutamos los hilos
		h1.start();
		h2.start();
		
		System.out.println("Final programa");
	}
	
	
	
	
	
}
