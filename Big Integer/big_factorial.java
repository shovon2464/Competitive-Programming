
import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here

        System.out.println(big_factorial(100));
	}

    public static BigInteger big_factorial(int n){
        BigInteger result = BigInteger.ONE;

        for(int i=2;i<=n;i++){
            result = result.multiply(BigInteger.valueOf(i));
        }

        return result;
    }
}

