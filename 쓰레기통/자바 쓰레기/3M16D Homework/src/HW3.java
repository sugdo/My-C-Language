import java.util.Scanner;

public class HW3 {
	
	public static void main(String[] arg)
	{
		Scanner Keyboard = new Scanner(System.in);
		double w1,w2;   
		double h1,h2;
		int age1,age2;
		double BMR1,BMR2;
		int chocobar=230;
		int count1=0,count2=0;

		System.out.println("Input man weight in pounds:");
		w1=Keyboard.nextDouble();

		System.out.println("Input woman weight in pounds:");
		w2=Keyboard.nextDouble();
	
		System.out.println("Input man height in inches:");
		h1=Keyboard.nextDouble();
		
		System.out.println("Input woman height in inches:");
		h2=Keyboard.nextDouble();
		
		System.out.println("Input man`s age:");
		age1=Keyboard.nextInt();

		System.out.println("Input woman`s age:");
		age2=Keyboard.nextInt();
		
		BMR1 = 66 + (6.3 * w1) + (12.9 * h1) - (6.8 * age1);
		BMR2 = 655 + (4.3 * w2) + (4.7 * h2) - (4.7 * age2);
           
		while( (double)chocobar*count1<BMR1 )
               count1++;
		while( (double)chocobar*count2<BMR2 )
               count2++;


		System.out.println("man need "+count1+"chocobar" );

		System.out.println("woman need "+count2+"chocobar" );
		
	}
}



