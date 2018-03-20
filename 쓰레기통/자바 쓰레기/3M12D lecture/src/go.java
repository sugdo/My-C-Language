
/*

import java.util.Scanner;

public class go {
	
	
	public static void main(String[] arg)
	{
		int amount , originalAmount,quarters,dimes,nickels;
		
		System.out.println("Enter a price of an item in cents:");
		Scanner Keaboard = new Scanner(System.in);
		amount=Keaboard.nextInt();
		
		originalAmount=100-amount;
		quarters=originalAmount/25;
		originalAmount %= 25;
		dimes=originalAmount/10;
		originalAmount %= 10;
		nickels=originalAmount/5;
		originalAmount %= 5;
		
		System.out.println("Your change is "+quarters+"quarters and " + dimes + "dimes and "+ nickels +"nickels" );
		
	}
	
}

*/




import java.util.Scanner;

public class go {
	
	public static final double OVERDRAWN_PENALTY = 8.00;
	public static final double INTEREST_RATE=0.02;
	
	public static void main(String[] arg)
	{
		
		
		double balance;
		System.out.print("Enter your ckecking account balance:");
		Scanner Keyboard = new Scanner(System.in);
		balance=Keyboard.nextDouble();
		System.out.println("Original balance "+balance);
		if(balance>=0)
		balance=balance + (INTEREST_RATE*balance)/12;
		else
			balance=balance-OVERDRAWN_PENALTY;
		System.out.print("After adjusting for one month");
		System.out.println("of interest and penalties,");
		System.out.println("Your new balance is "+balance);
	}
	
}

