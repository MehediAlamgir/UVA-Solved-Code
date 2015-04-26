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
    int n,d,r,i,a[101],m[101],t,ovt;
    while((scanf("%d %d %d",&n,&d,&r))==3)
    {
        if(n==0 && d==0 && r==0)
            break;

        for(i=0;i<n;i++)
            scanf("%d",&m[i]);

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        sort(m,m+n);
        sort(a,a+n);

        ovt=0;
        for(i=0;i<n;i++)
        {
            t=m[i]+a[n-i-1];
            if(t>d)
            {
                ovt+=(t-d)*r;
            }
        }

        printf("%d\n",ovt);
    }

	return 0;
}
