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
#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define MAX   10000007
#define INF   1<<30 	//infinity value
#define EPS   1e-9
#define mod   1000000007


int main()
{
    int n,q,i;
    map<string, string>slogan;
    char s1[101],s2[101],s3[101];
    cin>>n;
    getchar();

    for(i=0;i<n;i++)
    {
        gets(s1);
        gets(s2);
        slogan[s1]=s2;
    }


    cin>>q;
    getchar();

    for(i=0;i<q;i++)
    {
      gets(s3);
      cout<<slogan[s3]<<endl;
    }

	return 0;
}
