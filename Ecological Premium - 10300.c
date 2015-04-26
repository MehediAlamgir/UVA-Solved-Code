#include <stdio.h>

int main()
{
	freopen("chk.txt","r",stdin);
	int tc,f,a,b,c,i,r,p,res,j;

	scanf("%d",&tc);
	for(j=1;j<=tc;j++)
	{
	   while((scanf("%d",&f)) !=EOF)
	   {

		p=0;
		for(i=1;i<=f;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			r=a*c;
			res=r+p;
			p=res;
		}

		printf("%d\n",p);

		}


	}

	return 0;
}
