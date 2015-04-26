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
	long long tc,cn,t,i,j,k,a[10001],sum;

	scanf("%lld",&tc);

	for(cn=0;cn<tc;cn++)
	{
		sum=0;
		scanf("%lld",&t);

		for(j=0;j<t;j++)
		{
		scanf("%lld",&a[j]);
		}

		sort(a,a+t);


		for(k=t-3;k>=0;k-=3)
		{
			sum+=a[k];
		}

		printf("%lld\n",sum);
	}

	return 0;

}
