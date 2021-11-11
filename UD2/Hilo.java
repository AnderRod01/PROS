package actividad14;

class Hilo extends Thread { 
	Recurso a; 
	Recurso b; 
	public Hilo(Recurso a, Recurso b,String nombre) { 
		super(nombre); 
		this.a = a; 
		this.b = b; 
	} 
	public void run(){ 
		System.out.println("Hilo " + this.getName() + " comienza"); //mensaje del hilo que comienza
		synchronized(a) { 
			try { 
				Thread.sleep(100); //Sleep de 100 milisegundos
			} catch (InterruptedException e) { 
				e.printStackTrace(); 
			} 
			synchronized(b) { 
			} 
			System.out.println("Hilo " + this.getName() + " ha terminado"); //mensaje del hilo que termina
			} 
		} 
	}
class Recurso{ 
}