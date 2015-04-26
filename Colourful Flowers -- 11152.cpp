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

	LL a,b,c;
	double k,rose,aot,violet,r1,r2,sunflower,aoc,t;

	while ((scanf("%lld %lld %lld",&a,&b,&c))==3)
	{
		k=(a+b+c)/2.0;
		t=sqrt(k*(k-a)*(k-b)*(k-c));
		r1=t/k;
		rose=PI*r1*r1;

		aot=t;
		violet=aot-rose;

		//r2=c/2.0;
		r2=(a*b*c)/(4.0*t);

		aoc=PI*r2*r2;

		sunflower = aoc-t;

		printf("%.4lf %.4lf %.4lf\n",sunflower+EPS,violet+EPS,rose+EPS);

	}

	return 0;

}
