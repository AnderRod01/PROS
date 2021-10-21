package actividad1;

public class Actividad1 {
	public static void main(String[] args) {
		Hilo hilo1= new Hilo();	//Creamos el primer hilo	
		hilo1.setName("Primero");//Le asignamos el nombre "Primero"
		
		Hilo hilo2= new Hilo(); //Creamos el segundo hilo
		hilo2.setName("Segundo"); //Le asignamos el nombre 'Segundo'
		
		hilo1.start();
		hilo2.start();//Los ejecutamos
		
		System.out.println("Fin del programa"); //Fin del programa
	}
}
