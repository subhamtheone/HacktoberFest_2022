//Swarnam 
//Finding Second Highest Elements in Array
import java.util.*;
public class sh {

	
		
		public static void main(String[] args) {
			Scanner ms= new Scanner(System.in);
			int n= ms.nextInt();
		    int arr[] = new int [n];
		    for(int i=0;i<n;i++)
		    {
		    	arr[i]= ms.nextInt();
		    }
		    
		  int high = Integer.MIN_VALUE;
		  int sh= Integer.MIN_VALUE;
		  for(int i=0;i<n;i++) {
			  if(arr[i]>high) {
				  sh=high;
				  high=arr[i];
			  }
			  if(arr[i]<high&&arr[i]>sh) {
				  sh=arr[i];
			  }
		  }
		    System.out.println("Second highest is "+ sh);
		    ms.close();
		



	}

}
