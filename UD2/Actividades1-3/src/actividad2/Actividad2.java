package actividad2;

public class Actividad2 {
	public static void main(String[] args) {
		
		for (int i = 1; i <= Integer.parseInt(args[0]); i++) {
			Hilo hilo = new Hilo();		//Creamos un hilo
			hilo.setName("Hilo "+ i);	//Le asignamos el nombre 'Hilo' + su numero
			hilo.start();	//Ejecutamos
			try {
				hilo.join();//Esperamos a que termine
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}	
		}
		System.out.println("Fin programa"); //Fin del programa
	}
}
