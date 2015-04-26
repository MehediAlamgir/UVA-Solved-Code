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
    int i,num;
    vector<int> v;
    map<int,int> mp1;
    map<int,int> mp2;

     mp1.clear();
     mp2.clear();

   while((scanf("%d",&num))==1)
   {
        if( mp1[num]==0)
        {
            v.push_back(num);
            mp1[num]=1;
            mp2[num]++;
        }

        else mp2[num]++;

   }
   int s=v.size();
   for(i=0;i<s;i++)
    printf("%d %d\n",v[i],mp2[v[i]]);

	return 0;
}
