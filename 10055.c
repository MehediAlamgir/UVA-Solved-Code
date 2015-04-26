#include<stdio.h>
int main()
{
	long long h,o,r;
    while (scanf("%lld %lld",&o,&h)!=EOF )
    {
		if(h<o)
		{
			r=o-h;
			printf("%lld\n",r);
		}
		else
		{
			r=h-o;
			printf("%lld\n",r);
		}

    }

    return 0;
}
