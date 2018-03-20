import java.util.Scanner;

public class ScannerDemo {

	public static void main(String[] args)
	{
		Scanner Keyboard = new Scanner(System.in);
		System.out.println("Enter two whole numbers");
		System.out.println("seperated by one or more spaces:");
		
		int n1,n2;
		n1 = Keyboard.nextInt();
		n2 = Keyboard.nextInt();
		System.out.println("You enterd "+ n1 + "and"+n2);
		System.out.println("Next enter two numbers");
		System.out.println("A decimal point is OK.");
		double d1,d2;
		d1=Keyboard.nextDouble();
		d2=Keyboard.nextDouble();
		System.out.println("You enterd " + d1 + "and" + d2);
		System.out.println("Next enter two words:");
		
		String s1,s2;
		s1=Keyboard.next();
	    s2=Keyboard.next();
	    System.out.println("You entered\""+s1+ "\"and\"" +s2 + "\"");
	    s1=Keyboard.nextLine();
	    System.out.println("Next enter a line of text:");
	    s1=Keyboard.nextLine();
	    System.out.println("You entered: \"" + s1 + "\"");
	    
	    
		
		
	}
	
}
