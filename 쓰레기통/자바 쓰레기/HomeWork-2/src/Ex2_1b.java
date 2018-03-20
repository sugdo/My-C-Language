import java.util.Scanner;


public class Ex2_1b

{
	public static void main(String[] args)
	 {
	
		
		Scanner Keyboard = new Scanner(System.in);
	    System.out.println("Enter Fahrenheit");
	    double fa;
	    fa=Keyboard.nextDouble();
	    double C = 5*(fa - 32)/9;
	    System.out.println("a temperature in Celsius is " + C);
	    
	    
     }
}


