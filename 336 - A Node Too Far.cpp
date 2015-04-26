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
#define SIZ 65
#define VIS 100005

/*====================================== CONSTANT End===================================================*/

vector<int>graph[SIZ];
set<int>s1,s2;
queue<int>q;
map<int,int>visited,level;
map<int,int>mp,mp2;

int bfs(int src,int length,int s2_size)
{

   visited.clear();
   level.clear();

    q.push(src);
    visited[src]=1;
    level[src]=0;

    while(!q.empty())
    {
        int u=q.front();
        int temp = mp[u];
        int sz = graph[temp].size();
        for(int i=0;i<sz;i++)
        {
            int v = graph[temp][i];
            int temp2 = mp2[v];
            v=temp2;
            if(!visited[v])
            {
                visited[v]=1;
                level[v] = level[u]+1;

              //  int levOfU = level[u];
              //  int levOfV = level[v];

                if(level[v]<=length)
                {
                    //cout<<"V: "<<v<<endl;
                    s1.insert(v);
                }
                q.push(v);

            }
        }

        q.pop();
    }

//    cout<<"Set1 Size: "<<s1.size()<<endl;
//    cout<<"Set2 Size: "<<s2_size<<endl;

    int s1_size = s1.size();
    s1.clear();
    return s2_size-s1_size-1;   // As we did not calculate source node , so -1;
}

int main()
{
   // input;

    int node,n1,n2,StartingNode,TTL,cn,cnt,N1,N2;

    cn=1;
    while(~(scanf("%d",&node)))
    {
        if(node==0)
            break;

        cnt=0;
        mp.clear();
        mp2.clear();
        for(int i=0;i<node;i++)
        {
            scanf("%d %d",&n1,&n2);

            if(mp.count(n1)==0)
            {
                mp[n1] = cnt;
                mp2[cnt]=n1;
                cnt++;
            }

            if(mp.count(n2)==0)
            {
                mp[n2] = cnt;
                mp2[cnt]=n2;
                cnt++;
            }

            N1 = mp[n1];
            N2 = mp[n2];

            graph[N1].push_back(N2);
            graph[N2].push_back(N1);


            s2.insert(n1);
            s2.insert(n2);
        }

        while(~(scanf("%d %d",&StartingNode,&TTL)))
        {
            if(StartingNode==0 && TTL==0)
                break;

            int s2_size=s2.size();

            int UnreacheableNode =  bfs(StartingNode,TTL,s2_size);

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cn++,UnreacheableNode,StartingNode,TTL);
        }

        memset(graph,0,sizeof graph);
        s2.clear();

    }

    return 0;
}
