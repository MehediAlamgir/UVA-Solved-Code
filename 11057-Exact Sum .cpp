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
    int n,m,i,j,arr[10001],t1,t2,d,res,ans1,ans2,ma;
    while((scanf("%d",&n))==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%d",&m);
        sort(arr,arr+n);
        ma=d=INF;
        ans1=ans2=0;
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]<m)
            {
                if(binary_search(arr,arr+n,m-arr[i]))
                {
                    t1=m-arr[i];
                    t2=arr[i];
                    d=abs(t2-t1);
                }
            }

            if(ma>d)
            {
                ans1=t1;
                ans2=t2;
                ma=d;
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",ans1,ans2);
        printf("\n");

    }

	return 0;
}
