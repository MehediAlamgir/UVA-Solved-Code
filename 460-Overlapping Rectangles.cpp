#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <string>
#include <sstream>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <memory.h>
#include <functional>
#include <numeric>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define PI 2*acos(0.0)
#define MAX3(a,b,c) max(a,max(b,c))
#define MIN3(a,b,c) min(a,min(b,c))
#define MAX   10000007
#define INF   1<<30 	//infinity value
#define EPS   1e-9
#define MOD   1000000007


int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,cnt=0,tc,xll,yll,xur,yur;

    scanf("%d",&tc);
   // printf("\n");


    while(cnt<tc)
    {
        cnt++;
        if(cnt>1)
            printf("\n");

        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d %d %d %d",&x3,&y3,&x4,&y4);

        xll=max(x1,x3);
        yll=max(y1,y3);
        xur=min(x2,x4);
        yur=min(y2,y4);

        if( (xll>=xur) || (yll>=yur) )
        {
            printf("No Overlap\n");
        }

        else
            printf("%d %d %d %d\n",xll,yll,xur,yur);

     //   printf("\n");

    }

	return 0;
}
