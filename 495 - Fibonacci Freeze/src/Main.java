import java.util.*;
import java.math.*;

public class Main
{
	public static void main(String[] args)
	{
		int tc,i,n;
		BigInteger a,b;
		BigInteger fib[] = new BigInteger[50001];
		fib[0] = BigInteger.ZERO;
		fib[1] = BigInteger.ONE;
		for(i=2;i<=5001;i++)
		{
			fib[i]=fib[i-1].add(fib[i-2]);
		}
		
		Scanner inp =new Scanner(System.in);
		
		while(inp.hasNext())
		{
			n=inp.nextInt();
			System.out.println("The Fibonacci number for "+n+" is "+fib[n]);
			
		}
	}



}
