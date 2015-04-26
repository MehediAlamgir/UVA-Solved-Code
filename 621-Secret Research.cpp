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
    //input;
    int tc,i,l;
    //char str[1000];
    string str;

    scanf("%d",&tc);
    getchar();
    for(int cn=0;cn<tc;cn++)
    {
        getline(cin,str);
        l=str.size();

            if(str=="1" || str=="4" || str=="78")
                printf("+\n");

            else if(str[l-1]=='5' && str[l-2]=='3')
                printf("-\n");

            else if(str[0]=='9' && str[l-1]=='4')
                printf("*\n");

            else
                printf("?\n");



    }

	return 0;
}
