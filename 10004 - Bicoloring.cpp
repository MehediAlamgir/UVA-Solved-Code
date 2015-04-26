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


int ne,n,i,j,u,v,a,b,sz;
vector<int>edge[201];
int color[201];

bool bfs(int src)
{
    queue<int>q;
    color[src]=1;
    q.push(src);

    while(!q.empty())
    {
        a=q.front();
        q.pop();
        sz=edge[a].size();

        for(i=0;i<sz;i++)
        {
            if(color[edge[a][i]]== -1)
            {
                if(color[a]==1)
                {
                    color[edge[a][i]]=2;
                }

                else
                {
                     color[edge[a][i]]=1;
                }

                q.push(edge[a][i]);
            }

            else if(color[a]==color[ edge[a][i] ])
            {
                return false;
                break;
            }


        }
    }

    return true;
}


int main()
{
   // input;
    while((scanf("%d",&n))==1)
    {
        if(n==0)
            break;

        scanf("%d",&ne);
        for(i=0;i<ne;i++)
        {
            scanf("%d %d",&u,&v);
            edge[u].push_back(v);
            edge[v].push_back(u);

        }
        memset(color,-1,sizeof(color));

        if(bfs(0)==true)
            printf("BICOLORABLE.\n");

        else printf("NOT BICOLORABLE.\n");

      //  memset(edge,0,sizeof(edge));
       // memset(color,0,sizeof(color));
      for (i=0;i<n;i++)
        edge[i].clear();

    }

	return 0;
}
