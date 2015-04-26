import java.util.*;
import java.math.*;

public class Main 
{
	public static void main(String[] args)
	{
		int tc,i;
		BigInteger p,q,GCD,n1,n2;
		Scanner inp = new Scanner(System.in);
		while(inp.hasNext())
		{
			tc=inp.nextInt();
			for(i=0;i<tc;i++)
			{
				p=new BigInteger(inp.next()); // p=inp.nextBigInteger();
				inp.next();
				q=inp.nextBigInteger();
				GCD=p.gcd(q);
				n1=p.divide(GCD);
				n2=q.divide(GCD);
				System.out.println(n1+" / "+n2);
			}
		}
	}	

}
