package actividad1;

public class Actividad1 {
	public static void main(String[] args) {
		Hilo p=new Hilo(); //Creacion del primer hilo
		p.setName("Primero"); //Le ponemos de nombre "Primero"
		
		
		Hilo s=new Hilo(); //Creacion del segundo hilo
		s.setName("Segundo"); //Le ponemos de nombre "Segundo"
		
		p.start(); //Ejecutamos el primero
		s.start(); //Ejecutamos el segundo
		System.out.print("Fin programa\n"); //imprimimos por pantalla "Fin del programa"
	}
}
