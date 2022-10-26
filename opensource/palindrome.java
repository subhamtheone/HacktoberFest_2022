import java.util.*;
public class palindrome {

	public static boolean checkP(String s) {
		String t="";
		int n= s.length();
		for(int i= n-1;i>=0;i-- ) {
			char ch= s.charAt(i);
			t=t+ch;
		}
		if(s.equals(t)) {
			return true;
		}
		else {
			return false;
		}
	}
	public static void main(String[] args) {
		Scanner ms= new Scanner(System.in);
		String str= ms.next();
		boolean p= checkP(str);
		System.out.println(p);
		ms.close();
	}
}