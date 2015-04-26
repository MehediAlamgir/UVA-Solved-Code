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
	long  n,size,t;

	vector<long long>v;

	while((scanf("%ld",&n))==1)
	{
		//arr[i]=n;
		//sort(arr,arr+i);
		v.push_back(n);
		sort(v.begin(),v.end());
		size=v.size();

		if(size%2 !=0 )
		{
			printf("%ld\n",v[size/2]);
		}

		else
		{
			t=(v[(size/2)-1] + v[size/2])/2;
			printf("%ld\n",t);
		}

	}


	return 0;

}
