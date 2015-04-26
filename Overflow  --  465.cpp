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
	char str[3000],sign[5];
	double n1,n2,r;

	while(gets(str))
	{
		sscanf(str,"%lf%s%lf",&n1,&sign,&n2);
		//puts(str);

		printf("%s\n",str);

		if(n1>2147483647)
		printf("first number too big\n");

		if(n2>2147483647)
		printf("second number too big\n");

		if(sign[0]=='+')
		{
			r=n1+n2;

			if(r>2147483647)
			printf("result too big\n");
		}

		if(sign[0]=='*')
		{
			r=n1*n2;

			if(r>2147483647)
			printf("result too big\n");
		}
	}



	return 0;

}
