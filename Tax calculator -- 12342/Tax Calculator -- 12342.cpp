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
	//freopen("chk.txt","r",stdin);

	long long tc,cn,p,t1,t2,t3,cal;
	double tax,vat,n;

	scanf("%lld",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%lf",&n);

		if(n<=180000.0)
		{
			tax=0.0;
		}

		if(n>180000.0 && n<=480000.0)
		{
			p=n-180000.0;

			vat=p*0.1;
			tax=ceil(vat);

			if(p<10)
			{
				tax=2000.0;
			}
		}

		if(n>480000.0 && n<=880000.0)
		{
			t1=30000;
			p=n-480000.0;
			vat=p*.15;
			cal=ceil(vat);
			tax=t1+cal;

		}
		if(n>880000.0 && n<=1180000.0)
		{
			t1=30000;
			t2=60000;
			p=n-880000.0;
			vat=p*0.20;
			cal=ceil(vat);
			tax=t1+t2+cal;
		}

		if(n>1180000.0)
		{
			t1=30000;
			t2=60000;
			t3=60000;
			p=n-1180000.0;
			vat=p*0.25;
			cal=ceil(vat);
			tax=t1+t2+t3+cal;
		}

		if(tax>0.0 && tax<2000.0)
		{
			tax=2000.0;
		}

		printf("Case %lld: %.0lf\n",cn,tax);
	}

	return 0;

}
