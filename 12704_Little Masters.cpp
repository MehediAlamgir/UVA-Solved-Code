#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int tc,x,y,r;
    double s,l;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d %d %d",&x,&y,&r);
        s=abs((sqrt(x*x + y*y))-r);
        l=abs((sqrt(x*x + y*y))+r);
        printf("%0.2lf %0.2lf\n",s,l);
    }

    return 0;
}
