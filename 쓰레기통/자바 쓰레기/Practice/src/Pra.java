//My Java Practice
/*
import java.util.Scanner;

public class Pra {


	public static void main(String[] arg) {
		
		String S1,S2;
		System.out.println("Enter two lines of text:");
		Scanner Keyboard = new Scanner(System.in);
		S1 = Keyboard.nextLine();
		S2 = Keyboard.nextLine();
		
		if(S1.equals(S2))
			System.out.println("The two lines are equal.");
		else 
			System.out.println("the two lines are not equal");

		if(S2.equals(S1))
			System.out.println("The two lines are equal.");
		else 
			System.out.println("the two lines are not equal");
		

		if(S1.equalsIgnoreCase(S2))
			System.out.println("But the lines are equal , ignoring case");
		else
			System.out.println("Lines are not equal , even ignoring case.");
		
	}

}
*/

import java.util.Scanner;


public class Pra {


	public static void main(String[] arg) {
		
		String S1,S2;
		System.out.println("Enter two lines of text:");
		Scanner Keyboard = new Scanner(System.in);
		S1 = Keyboard.nextLine();
		S2 = Keyboard.nextLine();
	
	
		if(S1.equals(S2))
			
			System.out.println("The two lines are equal.");
		else 
			System.out.println("the two lines are not equal");

		if(S2.equals(S1))
			System.out.println("The two lines are equal.");
		else 
			System.out.println("the two lines are not equal");
		
		if(S1.equalsIgnoreCase(S2))
			System.out.println("But the lines are equal , ignoring case");
		else
			System.out.println("Lines are not equal , even ignoring case.");
		
	}

}
