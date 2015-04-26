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
#define SIZ 1005

/*====================================== CONSTANT End===================================================*/

int row,col;
//vector<int>graph[SIZ];
int graph[SIZ][SIZ];
int visited[SIZ][SIZ];
int level[SIZ][SIZ];

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int bfs(int sr,int sc,int dr,int dc)
{
    memset(level,0,sizeof level);
    memset(visited,0,sizeof visited );
    int cnt=0,u,v;
    queue<int>q;
    q.push(sr);
    q.push(sc);

    level[sr][sc]=0;
   // visited[sr][sc]=1;

    while(!q.empty())
    {
        u=q.front();
        q.pop();

        v=q.front();
        q.pop();

        for(int k=0;k<4;k++)
        {
            int c=u+dx[k];
            int d=v+dy[k];

            if(c>=0 && c<row && d>=0 && d<col && graph[c][d] != 1)
            {
                q.push(c);
                q.push(d);
                cnt++;
                graph[c][d]=1;
                level[c][d]=level[u][v]+1;
               // visited[c][d]=1
            }

            if(c==dr && d==dc)
                return level[c][d];
        }

    }
}


int main()
{
   // input;

    int no_of_row,RowPos,block,no_of_bomb,StartingPosRow,StartingPosCol,DestinationPosRow,DestinationPosCol;

    while(~scanf("%d %d",&row,&col))
    {

        if(row==0 && col==0)
            break;

        scanf("%d",&no_of_row);

        for(int i=0;i<no_of_row;i++)
        {
            scanf("%d %d",&RowPos,&no_of_bomb);

            for(int j=0;j<no_of_bomb;j++)
            {
                scanf("%d",&block);
                graph[RowPos][block]=1;
            }
        }

        scanf("%d %d",&StartingPosRow,&StartingPosCol);
        scanf("%d %d",&DestinationPosRow,&DestinationPosCol);

        int res = bfs(StartingPosRow,StartingPosCol,DestinationPosRow,DestinationPosCol);

        printf("%d\n",res);

         memset(graph,0,sizeof graph);

    }

    return 0;
}
