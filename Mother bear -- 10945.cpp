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
#define toUpperCase(s) for(int i=0;s[i];i++) s[i]>='a'&&s[i]<='z'?s[i]-=32:s[i];
#define toLowerCase(s) for(int i=0;s[i];i++) s[i]>='A'&&s[i]<='Z'?s[i]+=32:s[i];

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);
	char a[10000],b[10000],temp[10000];
	LL i,l,cnt=0,c=0,j;

	for( ; ;)
	{
		gets(a);

		cnt=0;
		c=0;
		int f=0;

		if(a[0]=='D' && a[1]=='O' && a[2]=='N' && a[3]=='E')
		break;


		toUpperCase(a);
		l=strlen(a);


		for(j=0;j<l;j++)
		{
			if(a[j] !='.' && a[j] !=',' && a[j] !='!' && a[j] !='?'  && a[j] !=',' && a[j] !=' ')
			{
			//c++;
			temp[c++]=a[j];
			}
		}

		for(i=0;i<c;i++)
		{
			if(temp[i] != temp[c-i-1])
			{
				printf("Uh oh..\n");
				f=1;
				break;
			}
		}

		if(f==0)
		{
			printf("You won't be eaten!\n");
		}

		memset(temp,0,i);


	}

	return 0;

}
