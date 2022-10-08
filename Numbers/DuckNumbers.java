//Name- Suman Meher
//Username- sumanmeher

//DUCK NUMBERS: A number which has zeroes present in it, but there should be no zero present in the beginning of the number.
//Ex: 7089,884602, etc.
import java.util.Scanner;
public class DuckNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int digit, num = sc.nextInt();
        boolean isDuckNumber = false;

        while (num != 0) {
            digit = num % 10;
            if (digit == 0){
                isDuckNumber=true;
                break;
            }
            num = num / 10;
        }
        if(isDuckNumber){
            System.out.println("A Duck Number");
        }else{
            System.out.println("NOT A Duck Number");
        }
        sc.close();
    }

}
