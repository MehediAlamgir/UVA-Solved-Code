#include <stdio.h>

int main()
{

	int c,f ,cn,tc;
	double res,ans;
	scanf("%d",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%d %d",&c,&f);
		res=(5.0/9.0)*f;
		ans=c+res;

		printf("Case %d: %0.2lf\n",cn,ans+10e-9);
	}


	return 0;

}
