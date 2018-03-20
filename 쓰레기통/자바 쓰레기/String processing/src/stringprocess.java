
public class stringprocess {

	public static void main(String[] args)
	{
		String sentence = "Text processing is hard";
		int Position = sentence.indexOf("hard");
		System.out.println(sentence);
		System.out.println("012345678901234567890123");
		System.out.println("the word \"hard\" starts at index"+Position);
		sentence = sentence.substring(0,Position)+"easy!";
		sentence= sentence.toUpperCase();
		System.out.println("The changed string is:");
		System.out.println(sentence);
		
		
		
	}
	
}
