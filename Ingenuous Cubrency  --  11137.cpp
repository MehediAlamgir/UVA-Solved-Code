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
#define siz 10001

using namespace std;

long long way[siz];
//int coin[21];
int coin[]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};// 1^3,2^3,3^3,4^3,5^3,6^3..........

void cal()
{
	int i,j;

	/*
	for(i=1;i<=21;i++)
	coin[i-1]=i*i*i;
	*/
	way[0]=1;

	for(i=0;i<21;i++)
	{
		for(j=coin[i];j<siz;j++)
		{
			way[j]+=way[j-coin[i]];
		}
	}
}

int main()
{
	//freopen("chk.txt","r",stdin);

	int d;
	cal();

	while(scanf("%d",&d)==1)
	{

		printf("%lld\n",way[d]);

	}

	return 0;

}


