import java.util.*;
import java.math.*;

public class Main 
{
	public static void main(String[] args)
	{
		BigInteger n,sum,br;
		Scanner inp = new Scanner(System.in);
		sum=BigInteger.ZERO;
		br=BigInteger.ZERO;
		while(inp.hasNext())
		{				
			n=inp.nextBigInteger();
			if(n.compareTo(br)==0)
				break;
			else
			{
				
				sum=sum.add(n);
			}				
		}
		
		System.out.println(sum);
	}

}
