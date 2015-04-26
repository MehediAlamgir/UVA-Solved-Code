import java.util.*;
import java.math.*;

public class Main
{	
	public static void main(String[] args) 
	{		
		int n;
		BigDecimal p,r;
		String res;
		Scanner inp = new Scanner(System.in);
		
		while(inp.hasNext())
		{
			r=inp.nextBigDecimal();
			n=inp.nextInt();
			
			p=r.pow(n);
			res=p.stripTrailingZeros().toPlainString();	
			if(res.charAt(0)=='0')
			{
				res=res.substring(1);
			}
			
			System.out.println(res);
		}

	}

}
