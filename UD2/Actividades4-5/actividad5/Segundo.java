package actividad5;

public class Segundo extends Thread{
	@Override
	public void run() {
		for (int i=1;i<=10;i++)	{ //Bucle de 15 repeticiones que saca por pantalla "Segundo" + el numero de repeticion
			System.out.println( "Segundo " + i );
			try {
				sleep(200); //Detenemos la ejecucion por 200 milisegundos (0.2s)
			} catch (InterruptedException e) {
			}
		}
	}
}
