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
#define MAX   10000007
#define INF   1<<30 	//infinity value
#define EPS   1e-9
#define MOD   1000000007


int main()
{
   // input;
    int n,k,m,p[100],i,j,a,cn,l;
    double tcents=0;
    char pass[10001];
    unsigned ch[500];

    scanf("%d",&n);
    for(cn=0;cn<n;cn++)
    {
        scanf("%d",&k);
        getchar();
        for(i=0;i<k;i++)
        {
            scanf("%c %d",&ch[i],&p[i]);
            getchar();
        }

        scanf("%d",&m);
        getchar();


        for(i=0;i<m;i++)
        {
            gets(pass);
            l=strlen(pass);
            for(j=0;j<l;j++)
            {
                for(a=0;a<k;a++)
                {
                    if(pass[j]==ch[a])
                    {
                        tcents+=p[a];
                    }
                }
            }
        }
        printf("%0.2lf$\n",tcents/100);
        tcents=0;
    }

	return 0;
}
