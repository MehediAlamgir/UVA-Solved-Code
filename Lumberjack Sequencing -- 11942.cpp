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

using namespace std;

int main()
{
//freopen("chk.txt","r",stdin);

int tc,i,j,temp,a[11],cnt1,cnt2,k,p,q,z;

scanf("%d",&tc);
printf("Lumberjacks:\n");
for(i=1;i<=tc;i++)
{
cnt1=0;
cnt2=0;
p=0;
q=0;

for(z=0;z<10;z++)
{
scanf("%d",&a[z]);
}

for(j=0;j<9;j++)
{
if(a[j]<a[j+1])
{
cnt1=1;
p++;
}
else
{
cnt1=0;
break;
}
}

for(k=0;k<9;k++)
{
if(a[k]>a[k+1])
{
cnt2=1;
q++;
}

else
{
cnt2=0;
break;
}
}

if((cnt1==1 && p==9) || (cnt2==1 && q==9))
{
printf("Ordered\n");
}

else{
printf("Unordered\n");
}

}

return 0;


}
