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
	int p,b,h,w,i,j,fare,seat,q,cost;

	while(scanf("%d %d %d %d",&p,&b,&h,&w)==4)
	{
		cost=500001;

	for(i=0;i<h;i++)
	{
		scanf("%d",&fare);
		for(j=0;j<w;j++)
		{
			scanf("%d",&seat);
			if(seat>=p)
			{
				cost=min(cost,p*fare);

			}
		}

	}
	if(cost<=b)
	printf("%d\n",cost);

	else printf("stay home\n");

	}

	return 0;
}
