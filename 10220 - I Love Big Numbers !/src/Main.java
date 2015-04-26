import java.util.*;
import java.math.*;

public class Main 
{
	public static void main(String[] args)
	{
		int n,i;
		BigInteger res,m,ans,z,sum;
		BigInteger f[] = new BigInteger[1001];
		
		Scanner inp = new Scanner(System.in);
		
		while(inp.hasNext())
		{
			n=inp.nextInt();
			res=BigInteger.valueOf(1);
			m=BigInteger.TEN;
			z=BigInteger.ZERO;
			sum=BigInteger.ZERO;
			for(i=n;i>0;i--)
			{
				res = res.multiply(BigInteger.valueOf(i));
			}
			
			while(res.compareTo(z)==1)
			{
				ans=res.mod(m);
				sum=sum.add(ans);
				res=res.divide(m);
			}
			
			System.out.println(sum);
		}
		
	}

}
