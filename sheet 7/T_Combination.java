import java.math.BigInteger;
import java.util.Scanner;
 
public class T_Combination
{
    public static void main(String[]agrs)
    {
        Scanner input = new Scanner(System.in);
        BigInteger n = input.nextBigInteger();
        BigInteger r = input.nextBigInteger();

        BigInteger fact_n = fact(n);
        BigInteger fact_r = fact(r);
        BigInteger n_minus_r = fact(n.subtract(r));

        // Calculate the combination: n! / (r! * (n-r)!)
        BigInteger combination = fact_n.divide(fact_r.multiply(n_minus_r));
        //print
        System.out.println(combination);
        
    }
    public static BigInteger fact(BigInteger n)
    {
        if(n.compareTo(BigInteger.ZERO)==0)
        {
            return BigInteger.ONE;
        }
        else
        {
            BigInteger result = BigInteger.ONE;
            while (!n.equals(BigInteger.ZERO))
            {
                result = result.multiply(n);
                n = n.subtract(BigInteger.ONE);
            }
            return result;
        }
    }
}