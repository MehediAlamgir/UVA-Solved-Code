/*

Solution Description: 	There are two ways of approaching this problem. The O(sqrt(n)) is to search from 1 to sqrt(n) looking
for any number that divides n evenely. The number of divisors below sqrt(n) is the same as the number of divisors above it,
so you only need to find the first half. Then, just print "yes" if you get an odd number, or "no" if you get an even number.

During this process however, you may realize that the only way a number can have an odd number of factors is if it's a perfect square.
So the O(1) solution is to just print "yes" if the number is a perfect square, and "no" otherwise.

*/

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
    long long tc,n,i,sq1;
    double sq2;

   while( (scanf("%lld",&n))==1)
    {
        if(n==0)
        break;

        int cnt=0;
        sq2=sqrt(n);
        sq1=int (sq2);

        if(sq1 == sq2)
            printf("yes\n");
        else
            printf("no\n");
   }
	return 0;
}

/*

Verdict: TLE

int main()
{
    long long tc,n,i,sq;

   while( (scanf("%lld",&n))==1)
    {
        if(n==0)
        break;

        int cnt=0;
        sq=sqrt(n);
        for(i=1;i<=sq;i++)
        {
            if(n%i==0)
                cnt+=2;

                if(i==(double)n/i)
                    cnt--;
        }

    //    printf("No. Of Factor: %d\n",cnt);


        if(cnt%2 == 0)
            printf("no\n");
        else
            printf("yes\n");

   }
	return 0;
}

*/
