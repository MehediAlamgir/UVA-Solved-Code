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


int main()
{
   // input;
    int s,i,cn=0,temp,sum=0;
    int c[15],r[15];

  //  scanf("%d",&s);

    while((scanf("%d",&s))==1 && s>=0)
    {
        temp=s;

        for(i=1;i<=12;i++)
        {
            scanf("%d",&c[i]);
        }

        for(i=1;i<=12;i++)
        {
            scanf("%d",&r[i]);
        }

        printf("Case %d:\n",++cn);

        if(temp>=r[1])
        {
            printf("No problem! :D\n");
            sum=temp-r[1];
        }

        else
        {
            printf("No problem. :(\n");
            sum=temp;
        }

        for(i=1;i<12;i++)
        {
            sum=sum+c[i];
            if(sum >= r[i+1])
            {
                printf("No problem! :D\n");
                sum -= r[i+1];
            }

            else
                printf("No problem. :(\n");

        }
    }

	return 0;
}
