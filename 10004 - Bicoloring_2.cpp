#include<bits/stdc++.h>

using namespace std;

/*======================================= Macro Start====================================================*/

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

/*======================================= Macro End====================================================*/

/*====================================== CONSTANT Start===================================================*/

#define INF (1<<30) //infinity value
#define EPS 1e-9
#define MOD 10007
#define SIZ 205

/*====================================== CONSTANT End===================================================*/

vector<int>graph[SIZ];
int color[SIZ],visited[SIZ];


bool bfs(int src)
{
    queue<int>q;
    memset(color,-1,sizeof color);
    memset(visited,0,sizeof color);

    q.push(src);
   // q.pop();
    color[src]=1;
    visited[src]=1;

    while(!q.empty())
    {
        int u = q.front();
        int length = graph[u].size();
        for(int i=0;i<length;i++)
        {
            int v = graph[u][i];

            if(!visited[v])
            {
                 if(color[u]==1)
                 {
                       color[v]=2;
                       visited[v]=1;
                       q.push(v);
                 }

                    else if(color[u]==2)
                    {
                       color[v]=1;
                       visited[v]=1;
                       q.push(v);
                    }
            }


            else
            {
                if(color[v]==color[u])
                {
                    return false;
                }

            }

        }

         q.pop();
    }

    return true;
}


int main()
{
    //input;
    //output;

    int node,edge,n1,n2;

    while(~(scanf("%d",&node)))
    {
        if(node==0)
            break;
        scanf("%d",&edge);

        for(int cn=0;cn<edge;cn++)
        {
            scanf("%d %d",&n1,&n2);
            graph[n1].push_back(n2);
            graph[n2].push_back(n1);
        }

        if(bfs(0))
            printf("BICOLORABLE.\n");

        else
            printf("NOT BICOLORABLE.\n");

        memset(graph,0,sizeof graph);
    }


    return 0;
}
