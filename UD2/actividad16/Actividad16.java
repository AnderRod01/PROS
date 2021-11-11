package actividad16;

public class Actividad16 {
	public static void main (String[] args) {
		Contador cont = new Contador (100);
		//Creamos los hilos con el contador inicialmente a 100
		HiloA a = new HiloA("HiloA", cont);
		HiloB b = new HiloB("HiloB",cont);
		a.start();
		b.start(); 
	} 
}

//Clase contador que incrementa o decrementa
class Contador {
	private int c=0;
	Contador (int c) { 
		this.c = c; 
	}

	public void incrementa() {
		c=c+1;
	}
	public void decrementa() {
		c=c-1;
	}
	public int getValor() {
		return c; 
	}
}


class HiloA extends Thread {
	private Contador contador;
	public HiloA (String n, Contador c) {
		setName(n);
		contador=c;
	}
	public void run () {
		
		//Bucle para incrementar el contador en 300, sincronizado con el otro hilo
		synchronized (contador) {
			for (int j=0; j < 300; j++) {
				contador.incrementa();
			}
			System.out.println(getName() + " contador vale " + contador.getValor());
		}
	}
}


class HiloB extends Thread {
	private Contador contador;
	public HiloB (String n, Contador c) {
		setName(n);
		contador=c;
	}
	public void run () {
		//Bucle para decrementar el contador en 300, sincronizado con el otro hilo
		synchronized (contador) {
			for (int j=0; j < 300; j++) {
				contador.decrementa();
			}
			System.out.println(getName() + " contador vale " + contador.getValor());
		}

	}
}