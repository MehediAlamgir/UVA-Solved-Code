#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);
	long long tc,t,a,b,c,d,x1,x2,y1,y2,i,cn,g;

	scanf("%lld",&tc);
	for(cn=0;cn<tc;cn++)
	{
		scanf("%lld",&t);
		scanf("%lld",&g);

		for(i=0;i<t;i++)
		{
			scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
			a=x1+y1;
			b=x2+y2;
			c=abs(x1-x2);
			d=abs(y1-y2);

			if(x1==x2 && y1==y2)
			printf("0\n");

			else if(c==d)
			printf("1\n");

			else if((a%2==0 && b%2!=0) || (a%2!=0 && b%2==0))
			printf("no move\n");

			else printf("2\n");
		}
	}

	return 0;

}
