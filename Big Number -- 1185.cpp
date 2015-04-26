#include <set>
#include <stdio.h>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#define size 10000001

using namespace std;
double save[size];

int main()
{
    //freopen("chk.txt","r",stdin);

     int tc,cn,num,d,i,b,res;

    save[0]=0;

    for(i=1;i<=size;i++)
    save[i]=save[i-1] + log(i);

    scanf("%d",&tc);
    for(cn=1;cn<=tc;cn++)
    {
        scanf("%d",&num);
        res=save[num]/log(10);

        printf("%d\n",res+1);
    }

    return 0;

}
