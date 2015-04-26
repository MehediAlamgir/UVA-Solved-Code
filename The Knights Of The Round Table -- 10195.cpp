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

	double a,b,c,s,r;
	while(scanf("%lf %lf %lf",&a,&b,&c)==3)
	{
		if(a==0.0 || b==0.0 || c==0.0)
		printf("The radius of the round table is: 0.000\n");

		else
		{

		s=(a+b+c)/2.0;
		r=sqrt(((s-a)*(s-b)*(s-c))/s);
		printf("The radius of the round table is: %0.3lf\n",r);

		}
	}

	return 0;

}
