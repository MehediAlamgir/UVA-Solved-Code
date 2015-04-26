#include<stdio.h>

int gcd(int a,int b)
{
	int c;
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}

	return a;
}

int main()
{
	int i,j,n,g;
	for( ; ;)
	{
		scanf("%d",&n);
		if(n==0)	break;

	g=0;

for(i=1;i<n;i++)

for(j=i+1;j<=n;j++)

{

    g+=gcd(i,j);

}

	printf("%d\n",g);

	}

	return 0;
}
