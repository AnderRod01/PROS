package actividad2;

public class Actividad2 {
	public static void main(String[] args) {
		for (int cont=1; cont<= Integer.parseInt(args[0]); cont++)  { //bucle con n veces pasadas por argumento
			
			Hilo hilo = new Hilo(); //Creacion del hilo
			
			hilo.setName("Hilo " + cont + "\t"); //Se le cambia el nombre por le numero de hilo correspondiente
			hilo.start(); //ejecutamos el hilo
			
			try {
				hilo.join(); //Espera a que todos los demas hilos terminen de ejecutarse
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		
		System.out.println("Fin programa\n");
	}
}
