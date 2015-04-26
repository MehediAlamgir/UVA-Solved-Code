
#include <stdio.h>


int main()
{
	//freopen("chk.txt","r",stdin);

	long long i,n,res,temp;
	n=1;

	for(; ;)
	{

	scanf("%lld",&n);

	if(n<0) break;

	res=1;
	for(i=1;i<=n;i++)
    {


	 if(i==1)

		res=res+1;


		if(i>1)
		res=res+i ;


	}


	printf("%lld\n",res);
	res=0;


	}


	return 0;

}
