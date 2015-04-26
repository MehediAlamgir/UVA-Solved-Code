#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<bitset>
#include<list>
#include<iomanip>
#include<string>
#include<climits>
#include <sstream>
#include<cctype>
#include<time.h>
#include<assert.h>
#include<set>
#include <numeric>
#include <functional>
#include<cstring>
#include<cmath>
#include<iterator>
#include <memory.h>
#include<utility>
#include <ctime>
#include<algorithm>

using namespace std;

/*======================================= Macro Start====================================================*/

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  //count one. in long long use __builtin_popcountll(i)
#define parity(i)   __builtin_parity(i)  //evenparity 0 and odd parity 1
#define btz(a)   __builtin_ctz(a)  //count binary trailling zero
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

/*======================================= Macro End====================================================*/

/*====================================== CONSTANT Start ===================================================*/

#define inf (1<<30) //infinity value
#define eps 1e-9
#define mod 10007
#define SIZ 30005


/*====================================== CONSTANT End===================================================*/


/*======================================= CODE HERE ================================================*/

int vis[SIZ],cnt;
vector<int>friends[SIZ];

void dfs(int u)
{
    int v;
    vis[u]=1;
    for(int i=0; i<friends[u].size(); i++)
    {
        v=friends[u][i];
        if(vis[v]==0)
        {
            cnt++;
            dfs(v);
        }
    }
}


int main()
{
   // input;

    int tc,m,n,a,b,i,j,ma;

    cin>>tc;

    for(int cn=0;cn<tc;cn++)
    {
        memset(friends,0,sizeof(friends));
        memset(vis,0,sizeof(vis));

        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            friends[a].push_back(b);
            friends[b].push_back(a);
        }


        ma =0;
        for(j=1;j<=n;j++)
        {
            cnt=1;
            if(vis[j]==0)
            {
                dfs(j);
            }

            if(cnt>ma)
            {
                ma=cnt;
            }
        }

         cout<<ma<<endl;

    }

    return 0;
}
