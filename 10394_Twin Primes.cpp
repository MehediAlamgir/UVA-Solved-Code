#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int N = 20000000,twin[20000000],j;
bool status[20000000];

void sieve()
{
    int i,k,sqrtN,g;


    for( i = 1; i <= N; i++ )
        status[i] = 0;

    sqrtN = int( sqrt((double)N) );

    for(g=4;g<=N;g+=2)
    {
        status[g]=1;
    }

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

    status[1]=1;
    status[2]=0;
  /*   k=1;
    for( i = 3; i <= N; i += 2 )
    {
        if( status[i] == 0 )
        {
            prime[k]=i;


           // t++;
            k++;
        }
    }
   // t+=2;
*/
}

void tp()
{
    int i,t=1;
    for(i=3;i<=N;i++)
    {
        if(status[i]==0 && status[i+2]==0)
        {
            twin[t]=i;
            t++;
        }
    }
}

int main()
{
    int n,temp=1;
    sieve();
    tp();
    while((scanf("%d",&n))==1)
    {
            printf("(%d, %d)\n",twin[n],twin[n]+2);

    }
	return 0;
}
