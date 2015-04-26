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

bool bs(long long s)
{
        int f,l;
        int mid =0 ;
        c=false;
        f=0;
        l=cnt-1;

        while(f<=l)
        {
            mid=(f+l)/2;

            if(s==status[mid])
            {
                c=true;
                break;
            }

            else if(s<status[mid])
            {
                 l=mid-1;
            }


            else if (s > status[mid])
            {
                f=mid+1;
            }
        }

    return c;
}



int main()
{

//freopen("chk.txt","r",stdin);
long long n,rem,temp;

prime();
while((scanf("%lld",&n))==1)
{
    rem = 0;
    temp=n;
    if(bs(n)==false)
    {
        printf("%lld is not prime.\n",n);
    }
    else {

        rem=0;
        while(n!=0)
        {
            rem =(rem*10) + (n%10);
            n=n/10;
        }
        if (bs(temp)==true && bs(rem)==true && temp!=rem)
        {
            printf("%lld is emirp.\n",temp);
        }
        else if (bs(temp)==true) {
            printf("%lld is prime.\n",temp);
        }

    }

     c= false;
}

return 0;

}
