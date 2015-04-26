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
#define siz 7500

using namespace std;

long way[siz];
int coin[]={50,25,10,5,1};

void cal()
{
	int i,j;

	way[0]=1;

	for(i=0;i<5;i++)
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

		printf("%ld\n",way[d]);

	}

	return 0;

}


