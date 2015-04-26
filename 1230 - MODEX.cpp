#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define PI 2*acos(0.0)
#define MAX3(a,b,c) max(a,max(b,c))
#define MIN3(a,b,c) min(a,min(b,c))
#define MAX   10000007
#define INF   1<<30 	//infinity value
#define EPS   1e-9
#define MOD   1000000007


int bigmod(int a,int p,int m)
{
	int b;

	if(p==0) return 1;

	if(p & 1)
	{
		b=bigmod(a,p-1,m);
		return ((a%m)*(b%m)) % m;
	}

	else
	{
		b=bigmod(a,p/2,m);
		return ((b%m)*(b%m))%m;
	}
}



int main()
{
    long long c,x,y,z,n;
    scanf("%lld",&c);
    for(int i=0;i<c;i++)
    {
        scanf("%lld %lld %lld",&x,&y,&n);
        z=bigmod(x,y,n);
        printf("%lld\n",z);

    }
    scanf("%lld",&c);

	return 0;
}
