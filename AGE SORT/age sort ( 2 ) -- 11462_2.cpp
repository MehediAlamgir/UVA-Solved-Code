#include<stdio.h>
#include<algorithm>
using namespace std;


int a[2000005];
int main()
{

int tc,i,p;


    for( ; ; )
    {
        scanf("%d",&tc);
        if(tc==0) break;

    for(i=0;i<tc;i++)
    {
        scanf("%d",&a[i]);
    }



    sort(a,a+tc);

        for(i=0;i<tc;i++)
        {

            printf("%d%c",a[i],i==tc-1?'\n':' ');
        }

           }

        return 0;
    }
