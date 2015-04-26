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
#define SIZ 10005

/*====================================== CONSTANT End===================================================*/

vector<int>graph[1000000];
vector<int>vec;
map<int,bool>visited;
map<int,int>parent;
map<int,int>level;
map<string,int>mp;
map<int,string>mp2,path;

int cntPair;

bool bfs(int src,int des)
{
    cntPair = 0;
    queue<int>q;
    visited.clear();
    parent.clear();
    level.clear();

    q.push(src);
    level[src]=0;
    visited[src]=1;

    while(!q.empty())
    {
        int u=q.front();
        int sz = graph[u].size();
        for(int i=0;i<sz;i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v] = 1;
                level[v] = level[u]+1;
                parent[v] = u;
                cntPair ++;

                q.push(v);
            }

            if(v==des)
            {
                int p=des;
                for(int b=0;b<cntPair;b++)
                {
                    vec.push_back(p);
                    p=parent[p];
                    if(p==src)
                    {
                        vec.push_back(p);
                        return 1;
                    }
                }
            }
        }
        q.pop();
    }

    return 0;
}

int main()
{
   // input;
    int tc;
    string s1,s2,src,des;
    bool flag=false;

    while(~scanf("%d",&tc))
    {
         int cnt=1;

         if(flag==true)
            printf("\n");

        for(int cn=0;cn<tc;cn++)
        {

            cin>>s1>>s2;
            if(mp.count(s1)==0)
            {
                mp[s1]=cnt;
                mp2[cnt]=s1;
                cnt++;
            }
            if(mp.count(s2)==0)
            {
                mp[s2]=cnt;
                mp2[cnt]=s2;
                cnt++;
            }

            int N1 = mp[s1];
            int N2 = mp[s2];

            graph[N1].push_back(N2);
            graph[N2].push_back(N1);
        }

        cin>>src>>des;
        int s = mp[src];
        int d = mp[des];

        if(src==des)
            cout<<src<<" "<<src<<endl;
            //cout<<endl; // both 2 cout gives AC.


        else if(bfs(s,d))
        {

            reverse(vec.begin(),vec.end());
            int s=vec.size();

            for(int a=0;a<s;a++)
            {
                 cout<<mp2[vec[a]]<<" "<<mp2[vec[a+1]]<<endl;
                 if(mp2[vec[a+1]] == des)
                    break;
            }

            flag=true;
        }
        else
        {
             cout<<"No route"<<endl;
        }

        memset(graph,0,sizeof graph);
        mp.clear();
        mp2.clear();
        vec.clear();
        path.clear();

    }

    return 0;
}
