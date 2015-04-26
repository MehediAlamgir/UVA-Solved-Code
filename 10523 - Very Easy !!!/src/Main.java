import java.util.*;
import java.math.*;
public class Main 
{
	public static void main(String[] args)
	{
		int i,n;
		BigInteger res,a,ans;
		Scanner inp = new Scanner(System.in);
		
		while(inp.hasNext())
		{
			n=inp.nextInt();
			a=inp.nextBigInteger();
			ans=BigInteger.ZERO;
			for(i=1;i<=n;i++)
			{
				res=BigInteger.valueOf(i).multiply(a.pow(i));
				ans=ans.add(res);
			}
			
			System.out.println(ans);
		}
	}

}
