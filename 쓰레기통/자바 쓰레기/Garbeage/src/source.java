import java.util.Scanner;

public class source {
	
	public static void main(String[] args)
	{
		
	int amount , originalAmount , quarters , dimes , nickels , pennies;
	
	System.out.println("Enter a whole number from 1 to 99");
	System.out.println("I will find a combination of coins");
	System.out.println("that equals that amount of change.");
	
	Scanner Keyboard = new Scanner(System.in);
	amount = Keyboard.nextInt();
	
	originalAmount=amount;
	quarters = amount / 25;
	amount %= 25;
	dimes = amount / 10;
	amount %= 10;
	nickels = amount / 5;
	amount %= 5;
	pennies = amount;
	
	System.out.println(originalAmount + " cents in coins can be given as:");
	System.out.println(quarters +" quarters");
	System.out.println(nickels + " nickels and");
	System.out.println(pennies + " pennies");
	}
}
