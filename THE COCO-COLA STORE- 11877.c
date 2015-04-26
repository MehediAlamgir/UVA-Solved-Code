#include<stdio.h>

int main()
{
	int s,r,sum;


	for(  ;  ; )
	{
		scanf("%d",&s);

		if(s==0) break;

		sum=0;

		while (s!=0)

		{

			r=s%3;
			s=s/3;

			if(s==0)  break;

			sum=sum+s;

			s=s+r;
			if(s==2)
			{
			    s=s+1;
			}

		}

			printf("%d\n",sum);



	}

	return 0;

}






