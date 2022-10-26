
import java.util.*;
public class fibo {

	public static void main(String[] args) {
		
	Scanner ms=new Scanner(System.in);
	int n=ms.nextInt();
	ms.close();
	int a=0;
	int b=1;
	
if(n<=0) {
	System.out.println("Invalid Input");
}
else if(n==1) {
	System.out.print(a+" ");
}
else if(n==2) {
	System.out.println(a+" "+ b+" ");
}
else {
	System.out.print(a+" "+ b+" ");
	for(int i=3; i<=n;i++) {
		int c=a+b;
		System.out.print(c+ " ");
		a=b;
		b=c;
		
		
	}
	
}


	}

	}


