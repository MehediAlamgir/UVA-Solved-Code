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

	long long i,n,p=0;

	for(; ;)
	{
		scanf("%lld",&n);
		if(n==0)
		break;

		for(i=1;i<=n;i++)
		{
			p=p+pow(i,2);
		}

		printf("%lld\n",p);
		p=0;
	}

	return 0;

}
