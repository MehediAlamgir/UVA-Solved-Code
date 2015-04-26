#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int tc,n,cn,i,s1,s2,res;
    int arr[5000];
    double a,b,c;
    scanf("%d",&tc);
    for(cn=1;cn<=tc;cn++)
    {
        scanf("%d",&n);
        s1=s2=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            s1=s1+((arr[i]/30)+1);
            s2=s2+((arr[i]/60)+1);
        }


            s1=(s1*10);


            s2=(s2*15);


        res=min(s1,s2);
        if(s1==s2)
        {
            printf("Case %d: Mile Juice %d\n",cn,res);
        }
        else if(res==s1)
        {
            printf("Case %d: Mile %d\n",cn,res);
        }
        else if(res==s2)
        {
            printf("Case %d: Juice %d\n",cn,res);
        }


        s1=s2=res=0;

    }
    return 0;
}
