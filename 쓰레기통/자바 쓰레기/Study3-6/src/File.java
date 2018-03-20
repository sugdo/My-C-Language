/*
public class File 
{

	public static void main (String[] args)
	{
		int numberOfBaskets,eggsPerBasket,totalEggs;
		
		numberOfBaskets=10;
		eggsPerBasket = 6;
		
		totalEggs = numberOfBaskets * eggsPerBasket;
		
		System.out.println("If you have");
		System.out.println(eggsPerBasket + "eggs per basket and");
		System.out.println(numberOfBaskets + "baskets , then");
		System.out.println("the total number of eggs is " + totalEggs);
	}
	
}
*/


import java.util.Scanner;
public class File
{

	public static void main (String[] args)
	{
		int numberOfBaskets,eggsPerBasket,totalEggs;
		
		
		Scanner Keyboard = new Scanner (System.in);
		System.out.println("Enter the number of eggs in each basket");
		eggsPerBasket = Keyboard.nextInt();
		System.out.println("Enter the number of baskets");
		numberOfBaskets=Keyboard.nextInt();
		
		totalEggs = numberOfBaskets * eggsPerBasket;
		
		System.out.println("");
		
		
		
	}
	
}