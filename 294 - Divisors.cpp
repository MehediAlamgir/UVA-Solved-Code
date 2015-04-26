#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    long long l,h,p,d,i,j,k;
    int sq,cnt,tc,temp=0,c=0;
    scanf("%lld",&tc);

    for(i=1;i<=tc;i++)
    {
        scanf("%lld %lld",&l,&h);
        //sq=sqrt(h);
        temp=0;
        for(j=l;j<=h;j++)
        {

            sq=sqrt(j);

            for(k=1;k<=sq;k++)
            {
                if(j%k==0)
                {
                    c+=2;
                }

                if(k==j/k)
                {
                    c--;
                }

                if(c>temp)
                {
                    cnt=c;
                    temp=c;
                    p=j;
                }


            }
            c=0;

        }

        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n",l,h,p,cnt);
        cnt=0;
        temp=0;
    }

}
