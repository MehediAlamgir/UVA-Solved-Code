#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int tc,cn,n,i,j,cntB,cntW,cntT,cntA;
    char ch;
    scanf("%d",&tc);
    for(cn=1;cn<=tc;cn++)
    {
        scanf("%d",&n);
        getchar();
        cntB=cntW=cntT=cntA=0;

        for(i=0;i<n;i++)
        {
            scanf("%c",&ch);
            if(ch=='B')
                cntB++;
            else if (ch=='W')
                cntW++;
            else if(ch=='T')
                cntT++;
            else if (ch=='A')
                cntA++;
        }
        if((cntB+cntA==n )&& cntB != 0)
            printf("Case %d: BANGLAWASH\n",cn);
        else if((cntW+cntA==n) && cntW !=0 )
            printf("Case %d: WHITEWASH\n",cn);
        else if(cntA==n)
            printf("Case %d: ABANDONED\n",cn);
        else if ((cntB==cntW))
            printf("Case %d: DRAW %d %d\n",cn,cntB,cntT);
        else if(cntB>cntW)
            printf("Case %d: BANGLADESH %d - %d\n",cn,cntB,cntW);
        else if (cntW>cntB)
            printf("Case %d: WWW %d - %d\n",cn,cntW,cntB);


    }
    return 0;
}
