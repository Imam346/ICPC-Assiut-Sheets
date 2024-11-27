import java.math.BigInteger;
import java.util.Scanner;

public class M_Divisible {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String num = input.next();
        String X = input.next();

        BigInteger bigNum = new BigInteger(num);
        BigInteger bigX = new BigInteger(X);

        BigInteger remainder = bigNum.mod(bigX);

        if (remainder.equals(BigInteger.ZERO))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
