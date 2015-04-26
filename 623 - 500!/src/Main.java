import java.util.*;
import java.math.*;

public class Main 
{
	public static void main(String[] args)
	{
		BigInteger res;
		int n,i;
		Scanner inp = new Scanner(System.in);
		
		while(inp.hasNext())
		{
			n=inp.nextInt();
			res=BigInteger.ONE;
			
			for(i=1;i<=n;i++)
			{
				res=res.multiply(BigInteger.valueOf(i));
			}
			
			System.out.println(n+"!");
			System.out.println(res);
		}
		
	}

}
