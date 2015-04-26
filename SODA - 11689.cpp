#include<stdio.h>

int main()
{
	int tc,b1,b2,b3,i,s,r,sum;
	scanf("%d",&tc);

	for(i=1;i<=tc;i++)
	{
		scanf("%d %d %d",&b1,&b2,&b3);
		s=b1+b2;

		sum=0;

		while (s!=0)

		{

			r=s%b3;
			s=s/b3;

			if(s==0)  break;

			sum=sum+s;
			s=s+r;


		//	sum= sum+r;
		}

			printf("%d\n",sum);

		

	}

	return 0;

}






