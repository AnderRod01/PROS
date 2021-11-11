package actividad10;

public class Hilo extends Thread{
	
	private String mensaje;
	
	public Hilo(String mensaje) {
		this.mensaje = mensaje;
	}
	
	
	@Override
	public void run() {
		//System.out.println("Ejecutando Hilo-Prioridad "+ getPriority());
		System.out.println("Ejecutando "+mensaje); //imprimimos por pantalla el mensaje
	}
}
