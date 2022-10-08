//Name- Suman Meher
//Username- sumanmeher

//EVIL NUMBERs: A special positive whole number that has an even number of 1's in its binary equivalent.
import java.util.Scanner;

public class EvilNumbers {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a positive number: ");
        int n = sc.nextInt();
        if (n < 0) {
            System.out.println("Invalid Input");
            return;
        }
        
        int count = 0;
        int p = 0;
        int binNum = 0;
        
        while (n > 0) {
            int d = n % 2;
            if (d == 1)
                count++;
            binNum += (int)(d * Math.pow(10, p));
            p++;
            n /= 2;
        }
        
        System.out.println("Binary Equivalent: " + binNum);
        System.out.println("No. of 1's: " + count);
        
        if (count % 2 == 0)
            System.out.println("Evil Number");
        else
            System.out.println("Not an Evil Number");
            
        sc.close();
    }
}

