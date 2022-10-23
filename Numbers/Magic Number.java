//Name- Aradhy Mishra
//Username- aradhymishra09

//MAGIC NUMBER: If the sum of its digits recursively are calculated till a single digit if the single digit is 1.
//Ex: 226 etc.

import java.util.Scanner;

public class MagicNumber
{
    public static void main(String[] args)
    {
        int n, r = 1, num, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number=");
        n = sc.nextInt();
        num = n;
        while (num > 9)
        {
            while (num > 0)
            {
                r = num % 10;
                sum = sum + r;
                num = num / 10;
            }
            num = sum;
            sum = 0;
        }
        if (num == 1)
        {
            System.out.println("Magic Number");
        }
        else
        {
            System.out.println("Not Magic Number");
        }
    }
}
