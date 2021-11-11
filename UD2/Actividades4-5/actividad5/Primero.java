package actividad5;

public class Primero extends Thread {
	@Override
	public void run() {
		for (int i=1; i<15; i++) { //Bucle de 15 repeticiones que saca por pantalla "Primero" + el numero de repeticion
			System.out.println("Primero " + i);
			
			try {
				
				sleep(100);	//Detenemos la ejecucion por 100 milisegundos (0.1s)
			
			} catch (InterruptedException e) {}
		}
	}

}
