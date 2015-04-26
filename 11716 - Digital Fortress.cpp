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
    char ch[10001],str[10001];
    int tc,i,j,l,sq1;
    double sq2;

    scanf("%d",&tc);
    getchar();

    for(int cn=0;cn<tc;cn++)
    {
        gets(ch);
        l=strlen(ch);
        sq2=sqrt(l);
        sq1=int(sq2);


        if(sq1 != sq2)
        {
            printf("INVALID\n");
            continue;
        }

        else
        {
            int cnt=0;
            for(i=0;i<sq1;i++)
            {
                  for(j=i;j<l;j+=sq1)
                  {
                      str[cnt++]=ch[j];
                  }
            }

            for(i=0;i<cnt;i++)
                printf("%c",str[i]);
            printf("\n");

        }

    }

	return 0;
}
