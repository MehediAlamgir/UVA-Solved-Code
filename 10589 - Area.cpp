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
#include <bits/stdc++.h>
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
    //input;

    double x,y,area,n,chk,m,a,r;
    while((scanf("%lf %lf",&n,&a)) && n!=0)
    {
        m=0;
        r=a*a;
        for(int i=0;i<n;i++)
        {
            scanf("%lf %lf",&x,&y);

            chk=0;

            if(pow((x-0),2) + pow((y-0),2) <= r)
                chk++;
            if(pow((x-a),2) + pow((y-0),2) <= r)
                chk++;
            if(pow((x-a),2) + pow((y-a),2) <= r)
                chk++;
            if(pow((x-0),2) + pow((y-a),2) <= r)
                chk++;

            if(chk==4)
                m++;

        }

        area=(m*a*a)/n;
        printf("%0.5lf\n",area);
    }

	return 0;
}
