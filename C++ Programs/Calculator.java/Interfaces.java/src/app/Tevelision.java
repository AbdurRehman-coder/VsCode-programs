package app; 
public class Tevelision implements Romote
{

	@Override
	public void volumUp() {
	System.out.println("volum is Up from romote: ");
		
	}

	@Override
	public void volumDown() {
		System.out.println("volum is down from romote: ");
		
	}

	@Override
	public void powerOn() {
		System.out.println("power is on from romote: ");
		
	}

	@Override
	public void powerOff() {
		System.out.println("poer is off form romote: ");
		
	}
    
    
}