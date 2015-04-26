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

	int cn,tc;
	double RA,GA,r,L,W;
	scanf("%d",&tc);

	for(cn=1;cn<=tc;cn++)
	{
		scanf("%lf",&L);
		r=L/5.0;
		RA= PI*r*r;
		W=(L*6.0)/10.0;		// (L/W)=(10/6) => W=(L*6)/10
		GA=(L*W)-RA;

		printf("%0.2lf %0.2lf\n",RA,GA);
	}

	return 0;

}
