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
#include <bits/stdc++.h>
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


int main()
{
    int tc,r,s[30001],i,j,k,sum,md,dis;
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {

        scanf("%d",&r);
        for(j=0;j<r;j++)
        {
            scanf("%d",&s[j]);
        }
        sort(s,s+r);
        int mx=INF;
        dis=0;
        for(j=0;j<r;j++)
        {
            dis=0;
            for(k=0;k<r;k++)
            {
                dis+=abs(s[j]-s[k]);
            }
            mx=min(dis,mx);
        }

        printf("%d\n",mx);

    }

	return 0;
}
