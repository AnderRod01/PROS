package actividad3;

public class Actividad3 {
	public static void main(String[] args) {
		
		Hilo hilo = new Hilo();		//Creamos el hilo
		hilo.setName("Thread-0");	//Le asignamos un nombre	
		hilo.setPriority(5);		//le ponemos una prioridad
		hilo.start();				//Lo ejecutamos
		
	
		
		System.out.println("El nombre del hilo es " + hilo.getName() + " y tiene la prioridad " + hilo.getPriority());
		
		
		
		hilo.setName("SUPER-HILO-DM2"); //Le cambiamos el nombre
		hilo.setPriority(6);			//Le cambiamos la prioridad
		
		
		System.out.println("Ahora el nombre del hilo es " + hilo.getName() + " y tiene la prioridad " + hilo.getPriority());
		System.out.print("Final Programa\n");
	}
}
