#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
   // freopen("chk.txt","r",stdin);
    int h1,h2,h3,h4,m1,m2,m3,m4,t,i,p,q,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        scanf("%d:%d %d:%d",&h3,&m3,&h4,&m4);
        p=(h1*60)+m1;
        q=(h2*60)+m2;
        x=(h3*60)+m3;
        y=(h4*60)+m4;

        if(p>y || x>q)
            printf("Case %d: Hits Meeting\n",i);
        else
            printf("Case %d: Mrs Meeting\n",i);


    }
}
