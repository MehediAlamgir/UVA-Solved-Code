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
	LL z,i,j,m,l,cnt,a,ans,cn=1,t,arr[10001],c=0;


	for(; ;)
	{
		cnt=0;
		ans=0;
		bool f=0;
		scanf("%lld %lld %lld %lld",&z,&i,&m,&l);
		t=l;

		if(z==0 && i==0 && m==0 && l==0)
		break;

		while(ans!=t)

		{
			a=(z*l)+i;
			ans=a%m;


			for(j=0;j<c;j++)
			{
				if(arr[j]==ans){
				f=1;
				}
			}

			if(f==1)
			break;

			arr[c++]=ans;
			l=ans;


		}


		printf("Case %lld: %lld\n",cn++,c);
		c=0;
		f=0;

	}

	return 0;

}
