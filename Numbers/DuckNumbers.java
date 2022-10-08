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
