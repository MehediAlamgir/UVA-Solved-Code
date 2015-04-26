#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define MX 1000010
#define MOD 1000000007

using namespace std;

int main()
{
freopen("chk.txt","r",stdin);

char a[2000],p,q,d;
int i,j,l;
bool b;


//while(gets(a))
for (; ;)
{ b=true;


gets(a);

if(a[0]=='*')
break;


l=strlen(a);

p=toupper(a[0]);
for(i=1;i<l;i++)
{

if(a[i]==' ')
{
q=toupper(a[i+1]);

if(p==q)
b=true;

else
{
//printf("N\n");
b=false;
break;
}
}
}

if(b==true)
{
printf("Y\n");

}
else
printf("N\n");


}

return 0;
}
