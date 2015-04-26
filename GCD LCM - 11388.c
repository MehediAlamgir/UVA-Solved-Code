#include<stdio.h>

int main()
{
	int i,a,b,tc;

	scanf("%d",&tc);

	for(i=0;i<tc;i++)
	{
		scanf("%d %d",&a,&b);

		if(b%a==0)
		printf("%d %d\n",a,b);

		else	printf("-1\n");

	}

	return 0;
}
