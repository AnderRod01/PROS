package actividad3;

public class Hilo extends Thread{
	public void run()
	{
		try {
			sleep(10000); //Sleep de 10 segundos
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
