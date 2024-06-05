
public class ArrayList {
	
	public static void main(String[] args) {
		int iterations = 10000;
			
			java.util.ArrayList<Long> QuizMarks = new java.util.ArrayList<Long>();
			long start = System.currentTimeMillis();
			
			for(long i=0;i <= iterations; i++)
				QuizMarks.add(i);
			
			long end = System.currentTimeMillis();
			//finding the time difference and converting it into seconds
		    float sec = (end - start) / 1000F; System.out.println(sec + " seconds");
		}

}

