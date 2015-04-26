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
    map<string, string>m1;

    char str[30],str1[30],str2[30],str3[30];

    while(gets(str))
    {
        if(str[0]=='\0')
            break;
        sscanf(str,"%s %s",&str1,&str2);

        m1[str2]=str1;
    }

    while(cin>>str3)
    {
        if(m1.find(str3) == m1.end())
            printf("eh\n");


        else
            cout << m1[str3] << endl;
    }

	return 0;
}
