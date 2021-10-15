package actividad2;

public class Hilo extends Thread{
	public void run(){
		for (int i=1;i<=20;i++) 
			System.out.println(getName()+ i); //Imprimimos el nombre del hilo + el numero de repeticion
		}
}
