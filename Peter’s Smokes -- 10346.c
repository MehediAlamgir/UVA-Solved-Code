#include <stdio.h>

int main()
{
    int n,k,sum,s,p,q;


    while( (scanf("%d %d",&n,&k) !=EOF) )

    {

		sum = n;

		s = n;

    while(s >= k)
	{

		sum = sum + (s / k);

		p = s / k;

		q = s % k;

		s = p + q;

	}

			printf("%d\n",sum);
	}

    return 0;
}
