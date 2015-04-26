#include <set>
#include <stdio.h>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#define size 10000000

using namespace std;

int status[size+1],cnt;
bool c = false;
void prime()
{

    int n,i,j,l;

    l=sqrt(size);

    for(i=3;i<=l;i+=2)
    {
        if (status[i]==0)
        {
            for(j=i*i;j<=size;j+=i+i)
            {
                status[j]=1;
            }
        }
    }

    cnt=0;
    status[cnt++]=2;
    for (i=3 ; i<=size; i+=2)
    {
        if (status[i]==0)
        {
            status[cnt++]=i;
        }
    }
    /*for (int i = 0 ; i<cnt ; i++)
    {
        cout<<status[i]<<" ";
    }
    cout<<endl;*/

}

int main()
{
	//freopen("chk.txt","r",stdin);

	long long num,x;
	int cnt,p,i;
	prime();

	for(; ;)
	{
		scanf("%lld",&num);
		x=num;
		if(num==0)
		{
			break;
		}

		p=sqrt(num);
		cnt=0;

		for(i=0;status[i]<=p;i++)
		{
			if(num % status[i]==0)
			{
				cnt++;


			while(num % status[i]==0)
			{
				num /= status[i];
			}

			}




		}

		if(num > 1)
		cnt++;

		printf("%lld : %d\n",x,cnt);
		cnt=0;


	}

	return 0;

}
