#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int N = 1010, status[1010],cnt=1,prime[1010],n,c,t,j;

void sieve()
{
    int i,k,sqrtN;


    for( i = 1; i <= N; i++ )
        status[i] = 0;

    sqrtN = int( sqrt((double)N) );


    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == 0 )
        {
            for( j = i * i; j <= N; j += i + i )
            {
                status[j] = 1;
            }

        }
    }

    prime[0]=1;
    prime[1]=2;
     k=2;
    for( i = 3; i <= n; i += 2 )
    {
        if( status[i] == 0 )
        {
            prime[k]=i;
            t++;
            k++;
        }
    }
    t+=2;

}


int main()
{
    int cen,i,j,odd,even,p=0,l,pnl;

    while (scanf("%d %d",&n,&c)==2)
    {
        t=0;
        p=0;
        sieve();

        if(n==1)
        {
             printf("%d %d: 1",n,c);
        }

        else if(t%2==0)
        {
            pnl=c*2;
            cen=(t-pnl)/2;

            printf("%d %d:",n,c);

            if(pnl>t)
            {
                for(i=0;i<t;i++)
                    printf(" %d",prime[i]);
            }
            else
            {
                for(i=cen;i<=t;i++)
                {
                        printf(" %d",prime[i]);
                        p++;

                        if(p==pnl)
							break;
                }
            }
        }

        else
        {
            pnl=(c*2)-1;
            cen=(t-pnl)/2;

            printf("%d %d:",n,c);

            if(pnl>t)
            {
                for(i=0;i<t;i++)
                    printf(" %d",prime[i]);
            }

            else
            {
                for(i=cen;i<=t;i++)
                {
                        printf(" %d",prime[i]);
                        p++;
                        if(p==pnl)
							break;
                }
            }
        }
        printf("\n\n");
    }
}
