import java.util.Scanner;
public class HW2 {


	public static void main(String[] arg)
	{
		Scanner Keyboard = new Scanner(System.in);
		String num;
		char n1=0,n2=0,n3=0;
		int result=0;
		
		
		
		System.out.println("Input a Octal number:");
		num=Keyboard.next();
		
		
		n1=num.charAt(0);
		n2=num.charAt(1);
		n3=num.charAt(2);
	
	    result += (n1-48)*64;

	    result += (n2-48)*8;

	    result += (n3-48);

		
		System.out.println(result);
	}
	
	
	
	
}