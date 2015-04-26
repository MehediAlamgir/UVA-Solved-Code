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
#define int long long
#define MX 1000010
#define mod 1000000007
#define toUpperCase(s) for(int i=0;s[i];i++) s[i]>='a'&&s[i]<='z'?s[i]-=32:s[i];
#define toLowerCase(s) for(int i=0;s[i];i++) s[i]>='A'&&s[i]<='Z'?s[i]+=32:s[i];

using namespace std;


int BigMod(int base,int power)
{
	int p1,p2;

	if(power==0)
	return 1;

	else if(power%2==1)
	{
		p1=base % mod;
		p2=BigMod(base,power-1) % mod;
		return (p1*p2) % mod;
	}

	else
	{
		p1=BigMod(base,power/2)%mod;
		return (p1*p1) % mod;
	}
}

 main()
{
	//freopen("chk.txt","r",stdin);
	long long tc,cn,n,r;

	scanf("%lld",&tc);

	for(cn=1;cn<=tc;cn++)
	{
		scanf("%lld",&n);

		r=(BigMod(2,n-1)*(n%mod)) % mod;

		printf("Case #%lld: %lld\n",cn,r);
	}

	return 0;

}
