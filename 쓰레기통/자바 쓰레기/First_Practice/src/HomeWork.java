// Practice 2.1 , Ex2_1a

/*
import java.util.Scanner;


public class HomeWork

{
	public static void main(String[] args)
	 {
	
		
		Scanner Keyboard = new Scanner(System.in);
	    System.out.println("Enter numbers");
	    String s1;
	    s1=Keyboard.next();
	    System.out.println(s1.charAt(0));
	    System.out.println(s1.charAt(1));
	    System.out.println(s1.charAt(2));
	    System.out.println(s1.charAt(3));
	    
	    
     }
}
*/

// Practice 2.1 , Ex2_1a

/*
import java.util.Scanner;


public class HomeWork

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
*/


import java.util.Scanner;


public class HomeWork

{
	public static void main(String[] args)
	 {
	
		
		Scanner Keyboard = new Scanner(System.in);
	    System.out.println("Input a line of text");
	    String s1;
	    s1=Keyboard.nextLine();
	    int idx = s1.indexOf (' ');
	    char ch = s1.charAt(idx+1);
	    String start = String.valueOf(ch).toUpperCase(); 
	    start += s1.substring (idx+2);
        start += " ";
	    String append = s1.substring (0 , idx);
        System.out.println(start  + append); 		
        Keyboard.close();
     }
}

 


