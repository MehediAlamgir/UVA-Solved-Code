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
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define MAX   10000007
#define INF   1<<30 	//infinity value
#define EPS   1e-9
#define mod   1000000007


int main()
{
  //  input;
    double s,a,radian,arc,chord;
    char str[3];

    while((scanf("%lf %lf %s",&s,&a,&str))==3)
    {
        if(a>180)
        {
            a=360-a;    // Apparently, they want the smaller arc and chord length given an angle between satellites.
        }

        if(str[0]=='m')
        {
            a=a/60;
        }

        arc=2*PI*(6440+s)*(a/360.0);

        radian=a*(PI/180.0);
        chord=2*(6440+s)*sin(radian/2.0);

        printf("%0.6lf %0.6lf\n",arc+EPS,chord+EPS);
    }

	return 0;
}
