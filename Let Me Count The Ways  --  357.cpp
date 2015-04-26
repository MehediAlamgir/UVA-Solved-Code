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
#define siz 30001

using namespace std;

LL way[siz];
LL coin[]={1,5,10,25,50};

int main()
{
	//freopen("chk.txt","r",stdin);
	LL d;
	LL i,j,t;

	while(scanf("%lld",&d)==1)
	{

		way[0]=1;

		for(i=0;i<5;i++)
		{
			for(j=coin[i];j<siz;j++)
			{
				way[j]+=way[j-coin[i]];
			}
		}

		if(way[d]<2)
		printf("There is only %lld way to produce %lld cents change.\n",way[d],d);

		else printf("There are %lld ways to produce %lld cents change.\n",way[d],d);

		memset(way,0,sizeof(way));
	}

	return 0;

}


