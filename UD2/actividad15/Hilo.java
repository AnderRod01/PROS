package actividad15;

import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Hilo extends Thread{
	
	private DateFormat df;
	private Date date;
	
	//Constructor para asignar el formato de la hora
	public Hilo () {
		df = new SimpleDateFormat("HH:mm:ss");
	}


	public void run() {
		for (int i=1; i<=5;i++) {
			//creamos una nueva fecha
			date = new Date();
			//imprimimos por pantalla el nombre y la hora
			System.out.println(this.getName()+ " - "+ df.format(date));
			try {
				//Esperamos 1 segundo
				sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
	
}
