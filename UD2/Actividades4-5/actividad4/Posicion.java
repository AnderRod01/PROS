package actividad4;

public class Posicion implements Runnable{

	@Override
	public void run() {
		// TODO Auto-generated method stub
		for (int i=1; i<=15; i++) {  //Bucle de 15 repeticiones que saca el nombre del hilo + el numero de repeticion
			System.out.println(Thread.currentThread().getName() + " " + i);
		}
	}
	
}
