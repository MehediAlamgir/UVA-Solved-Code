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
	long long b,s,i,cn;
	for(cn=1; ;cn++)
	{
		scanf("%lld %lld",&b,&s);
		if(b==0 && s==0)
		break;

		if(b<=1)
		{
			printf("Case %lld: :-\\\n",cn);
		}

		else if(b>s)
		{
			printf("Case %lld: :-(\n",cn);
		}

		else printf("Case %lld: :-|\n",cn);
	}

	return 0;

}
