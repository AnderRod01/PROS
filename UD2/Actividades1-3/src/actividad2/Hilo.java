package actividad2;

public class Hilo extends Thread { //Extiende  de Thread
	
	public void run()
	{
		for (int i = 1 ; i <= 20; i++) 	//bucle de 20 repeticiones para sacar el nombre del hilo + su numero por pantalla
			System.out.println(getName()+"\t" + i);	
	}
}

