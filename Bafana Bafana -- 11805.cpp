#include<stdio.h>

int main()
{
	//freopen("chk.txt","r",stdin);
	int tc,n,k,p,r,cn,a;
	scanf("%d",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%d %d %d",&n,&k,&p);

		a=(k+p)/n;
		r=(k+p)-(n*a);

		if(r==0)

		r=n;
		printf("Case %d: %d\n",cn,r);
	}

		return 0;
}
