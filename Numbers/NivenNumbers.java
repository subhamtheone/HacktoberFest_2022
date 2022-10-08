//Name- Suman Meher
//Username- sumanmeher

//NIVEN NUMBER: An integer that is divisible by the sum of its digits when written in that base.
//Ex: 12 etc.

import java.util.Scanner;

public class NivenNumbers {
    public static void main(String[] args) {
        int n, num, r,
        sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number: ");
        n = sc.nextInt();
        num = n;
        while (num > 0)
        {
            r = num % 10;
            sum = sum + r;
            num = num / 10;
        }
        if (n % sum == 0)
        {
            System.out.println("A Niven Number");
        }
        else
        {
            System.out.println("Not A Niven Number");
        }
        sc.close();
    }
}
