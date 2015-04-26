#include <stdio.h>
#include<math.h>

int main()
{
	int num,i,temp;

	//freopen("chk.txt","r",stdin);

	for( ; ; )
	{
		scanf("%d",&num);
		if(num==0)
		break;

		if(num<0)
		{
			printf("%d = -1 x ",num);
			num=num*(-1);
		}

		else	printf("%d = ",num);


		for(i=2;i<=sqrt(num);i++)
		{
			if(num%i==0)
			{
				printf("%d x ",i);
				num=num/i;
				temp=i;
				i=1;

			}
		}

		printf("%d\n",num);
	}

	return 0;
}
