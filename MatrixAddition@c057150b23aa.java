
public class MatrixAddition {

	
	public static void main(String[] args) {
		int n=10000;
		int M[][] = new int[n][n];
		int M1[][]= new int[n][n];
		int M2[][]= new int[n][n];
		
		for(int i=0 ; i<n ; i++)
			for(int j=0 ; j<n ; j++)
				M1[i][j] = 1;
		for(int i=0 ; i<n ; i++)
			for(int j=0 ; j<n ; j++)
				M2[i][j] = 2;
		long start = System.currentTimeMillis();
		
		
		//Row wise access
		for(int i=0 ; i<n ; i++)
			for(int j=0 ; j<n ; j++)
				M[i][j] = M1[i][j] + M2[i][j];
		
		
		
		long end = System.currentTimeMillis();
		//finding the time difference and converting it into seconds
	    float sec = (end - start) / 1000F; System.out.println(sec + " seconds in Row wise access");
	    //----------------------------------------------------------------------------
	    start = System.currentTimeMillis();
		//Column wise access
		for(int j=0 ; j<n ; j++)
			for(int i=0 ; i<n ; i++)
				M[i][j] = M1[i][j] + M2[i][j];
		end = System.currentTimeMillis();
		//finding the time difference and converting it into seconds
	    sec = (end - start) / 1000F; System.out.println(sec + " seconds in Column wise access");
	}

}
