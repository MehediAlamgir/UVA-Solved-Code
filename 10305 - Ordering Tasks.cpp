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

int m,n,i,j,k,v1,v2,p;
int edge[150][150],indeg[150],flag[120];
vector<int>ot;

void topsort()
{
    for(p=1;p<=n;p++)
    {
        for(i=1;i<=n;i++)
        {
            if(flag[i]==0 && indeg[i]==0)
            {
                flag[i]=1;
                ot.push_back(i);

                for(j=1;j<=n;j++)
                {
                    if(edge[i][j]==1)
                        indeg[j]--;
                }
            }
        }

    }

     for(k=0;k<n;k++)
            printf("%d ",ot[k]);

        printf("\n");
}

int main()
{
    while((scanf("%d %d",&n,&m))==2)
    {
        if(n==0 && m==0)
            break;

        for(i=0;i<m;i++)
        {
            scanf("%d %d",&v1,&v2);
            edge[v1][v2]=1;
            indeg[v2]++;
        }

        topsort();

        ot.clear();
        memset(edge,0,sizeof(edge));
        memset(indeg,0,sizeof(indeg));
        memset(flag,0,sizeof(flag));

    }

	return 0;
}
