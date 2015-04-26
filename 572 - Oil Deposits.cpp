#include<bits/stdc++.h>
using namespace std;

char str[105][105];
int dx[]={0,0,1,-1,-1,1,-1,1};
int dy[]={1,-1,0,0,1,1,-1,-1};
int r,c,i,j,k,x,y,a,b,cnt=0;

//int arr[4][2] = {0 , 1 , 0 , -1 , 1 , 0 , -1 , 0};

 queue<int>q;

int dfs()
{
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();

        for(k=0;k<8;k++)
        {
            a=x+dx[k];
            b=y+dy[k];

            if(a>=0 && a<r && b>=0 && b<c && str[a][b]=='@')
            {
                q.push(a);
                q.push(b);
                str[a][b]='*';
            }
        }

        dfs();

    }

    return cnt;

}


int main()
{
  //  freopen("in.txt","r",stdin);
    int res,row,col;

   while(( scanf("%d %d",&r,&c)==2))
    {
        if(r==0)
            break;

    for(i=0;i<r;i++)
        scanf("%s",str[i]);


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(str[i][j]=='@')
            {
                row=i;
                col=j;
                cnt++;
                q.push(row);
                q.push(col);
                dfs();

            }
        }
    }

    printf("%d\n",cnt);
    cnt=0;

    }

}
