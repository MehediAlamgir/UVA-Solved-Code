#include<stdio.h>

int bigmod(int a,int p,int m)
{
	int b;

	if(p==0) return 1;

	if(p & 1)
	{
		b=bigmod(a,p-1,m);
		return ((a%m)*(b%m)) % m;
	}

	else
	{
		b=bigmod(a,p/2,m);
		return ((b%m)*(b%m))%m;
	}
}

int main()
{
	int b,p,m,r;
	while(scanf("%d%d%d",&b,&p,&m) == 3)
	{
		r=bigmod(b,p,m);
		printf("%d\n",r);
	}
	return 0;
}
