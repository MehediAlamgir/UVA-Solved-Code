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
#define toUpperCase(s) for(int i=0;s[i];i++) s[i]>='a'&&s[i]<='z'?s[i]-=32:s[i];
#define toLowerCase(s) for(int i=0;s[i];i++) s[i]>='A'&&s[i]<='Z'?s[i]+=32:s[i];

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);
	double i,a,b,sum=0,ans;
	LL cn,tc;
	scanf("%lld",&tc);

	for(cn=1;cn<=tc;cn++)
	{
		sum=0;
		for(i=0;i<12;i++)
		{
			scanf("%lf",&a);
			sum += a;
		}

		ans=sum/12.0;

		if(ans>999.00)
		{
			printf("%lld $%ld,%.2lf\n",cn,long (ans/1000.0),fmod(ans,1000.0));
		}

		else printf("%lld $%.2lf\n",cn,ans);
	}

	return 0;

}
