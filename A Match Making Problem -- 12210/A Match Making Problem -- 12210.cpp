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
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define MX 1000010
#define MOD 1000000007

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);
	int b,s,i,j,x,y,p,min,cn=1;

	while((scanf("%d %d",&b,&s))==2)
	{
		if(b==0 && s==0)
		break;

		p=61;

		for(i=0;i<b;i++)
		{
			scanf("%d",&x);


			if(x<=p)
			{
				min=x;
				p=x;
			}

		}

		for(j=0;j<s;j++)
		{
			scanf("%d",&y);
		}

		if(b<=s)
		{
			printf("Case %d: 0\n",cn++);
		}

		else printf("Case %d: %d %d\n",cn++,(b-s),min);

	}

	return 0;

}
