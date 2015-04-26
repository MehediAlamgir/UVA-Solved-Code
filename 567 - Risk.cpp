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
#define SIZ 25

/*====================================== CONSTANT End===================================================*/

vector<int>graph[SIZ];
int visited[SIZ],level[SIZ];

int bfs(int src,int dest)
{
    queue<int>q;

    memset(visited,0,sizeof visited);
    memset(level,0,sizeof level);

    q.push(src);
    visited[src]=1;
    level[src]=0;

    while(!q.empty())
    {
        int u = q.front();
        int sz=graph[u].size();

        for(int i=0;i<sz;i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                q.push(v);
            }

            if(v==dest)
                return level[v];
        }

        q.pop();
    }
}

int main()
{
    //input;
    int i,num,cn=1,line=1,source,destination;

    while(~scanf("%d",&i))
    {
        if(line<=19)
        {
            for(int a=0;a<i;a++)
            {
                scanf("%d",&num);
                graph[line].push_back(num);
                graph[num].push_back(line);
            }

            line++;

            if(line>19)
            {
                int inp;
               // scanf("%d",&tc);
                cin>>inp;
                printf("Test Set #%d\n",cn++);
                for(int b=0;b<inp;b++)
                {
                    scanf("%d %d",&source,&destination);
                    int res = bfs(source,destination);
                    printf("%2d to %2d: %d\n",source,destination,res);
                }
                printf("\n");
                line=1;
                memset(graph,0,sizeof graph);

            }
        }
    }

    return 0;
}
