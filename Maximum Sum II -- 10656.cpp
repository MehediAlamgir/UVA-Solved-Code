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
	LL a[100001],i,j,n,cnt;
	bool f;
	while ((scanf("%lld",&n))==1)
	{
		if(n==0)
		break;

		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);

		}

		cnt=0;
		f=0;

		for(j=0;j<n;j++)
		{


			if(a[j]==0)
			{
				cnt++;

				if(cnt==n)
				{
				printf("0");
				}

				continue;
			}


			else
			 {
				if(f==1)
				{
					printf(" ");
				}

				printf("%lld",a[j]);

				f=1;

			}
		}

		printf("\n");
	}


	return 0;

}
