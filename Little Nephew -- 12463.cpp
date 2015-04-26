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

	long long a,b,c,d,e,ans;
	for(; ;)
	{
		scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);

		if(a==0 && b==0 && c==0 && d==0 && e==0)
		break;

		ans=a*b*c*d*d*e*e;

		printf("%lld\n",ans);

	}


	return 0;

}
