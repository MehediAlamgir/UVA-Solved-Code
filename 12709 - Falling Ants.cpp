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
#define g 9.81


int main()
{
    int tc,l,w,h,v;
    int arr[1000];
    double f;

    while((scanf("%d",&tc))==1 && tc!=0)
    {
        int cnt=0;
        int mh=-1,vol=-1,v;
        for(int i=0;i<tc;i++)
        {
            scanf("%d %d %d",&l,&w,&h);

            v=l*w*h;

            if(h>mh)
            {
                mh=h;
                vol=v;
            }

            else if(h==mh && v>vol)
            {
                mh=h;
                vol=v;
            }
        }

       printf("%d\n",vol);

    }

	return 0;
}
