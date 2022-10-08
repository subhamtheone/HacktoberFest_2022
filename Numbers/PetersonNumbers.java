//Name- Suman Meher
//Username- sumanmeher

//PETERSON NUMBER: A number whose sum of factorials of each digit is equal to the sum of the number itself.
//Ex: 145,etc
import java.util.Scanner;

public class PetersonNumbers {
    public static void main(String[] args) {
        int fact, rem, sum = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Number: ");
        int petnum = sc.nextInt();

        for (int temp = petnum; temp > 0; temp = temp / 10) {
            fact = 1;
            rem = temp % 10;

            for (int i = 1; i <= rem; i++) {
                fact = fact * i;
            }
            sum = sum + fact;
        }

        if (sum == petnum) {
            System.out.println("A Peterson Number");
        } else {
            System.out.println("Not A Peterson Number");
        }
        sc.close();
    }
}
