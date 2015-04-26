import java.util.*;
import java.math.*;

public class Main 
{	
	public static void main(String[] args) 
	{
		int n,i,c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
		BigInteger fact,mod;
		Scanner inp = new Scanner(System.in);
		
		while(inp.hasNext())
		{
			n=inp.nextInt();
			
			if(n==0)
				break;
			
			fact=BigInteger.ONE;
			
			for(i=1;i<=n;i++)
			{
				fact=fact.multiply(BigInteger.valueOf(i));
			}
			
			c0=c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
			
			while(fact.compareTo(BigInteger.ZERO)==1)
			{
				mod=fact.mod(BigInteger.TEN);
				
				if(mod.compareTo(BigInteger.ZERO)==0)
					c0++;
				
				if(mod.compareTo(BigInteger.ONE)==0)
					c1++;
				
				if(mod.compareTo(BigInteger.valueOf(2))==0)
					c2++;
				
				if(mod.compareTo(BigInteger.valueOf(3))==0)
					c3++;
				
				if(mod.compareTo(BigInteger.valueOf(4))==0)
					c4++;
				
				if(mod.compareTo(BigInteger.valueOf(5))==0)
					c5++;
				
				if(mod.compareTo(BigInteger.valueOf(6))==0)
					c6++;
				
				if(mod.compareTo(BigInteger.valueOf(7))==0)
					c7++;
				
				if(mod.compareTo(BigInteger.valueOf(8))==0)
					c8++;
				
				if(mod.compareTo(BigInteger.valueOf(9))==0)
					c9++;
				
				fact=fact.divide(BigInteger.TEN);
			}
			
			System.out.println(n+"! --");
			System.out.println("(0)"+"    "+c0+"    "+"(1)"+"    "+c1+"    "+"(2)"+"    "+c2+"    "+"(3)"+"    "+c3+"    "+"(4)"+"    "+c4);
			System.out.println("(5)"+"    "+c5+"    "+"(6)"+"    "+c6+"    "+"(7)"+"    "+c7+"    "+"(8)"+"    "+c8+"    "+"(9)"+"    "+c9);
		}
	}

}
