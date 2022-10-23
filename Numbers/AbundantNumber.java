//Name- Sourajyoti Bhowmik
//Username- thermo17

//ABUNDANT NUMBER: A number is called Abundant number if sum of its proper factors is greater than the number itself.
//Ex: 12 etc.

import java.util.Scanner;

public class AbundantNumber
{
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n = in.nextInt();
        int sum = 0;
        
        for (int i = 1; i < n; i++) {
            if (n % i == 0)
                sum += i;
        }
        
        if (sum > n)
            System.out.println(n + " is an abundant number");
        else
            System.out.println(n + " is not an abundant number");
    }
}
