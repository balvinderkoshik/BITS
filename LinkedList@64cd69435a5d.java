public class LinkedList {

	public static void main(String[] args) {
		
		java.util.LinkedList<Long> QuizMarks = new java.util.LinkedList<Long>();
		long start = System.currentTimeMillis();
		
		for(long i=0;i <= 10000000; i++)
			QuizMarks.add(i);
		
		long end = System.currentTimeMillis();
		//finding the time difference and converting it into seconds
	    float sec = (end - start) / 1000F; System.out.println(sec + " seconds");
	}

}