/*
		BISMILLAHIR RAHMANIR RAHIM

10019 - Funny Encryption Method

Simple base conversion problem.

**************************************************************************
ALGORITHM:


1. Input int n.
2. If it not in decimal base convert it to decimal.
   Convert the whole decimal number to binary number.
   Then count 1 of that binary number.
   This count is B1.
3. Convert each of the digit of n to its equivalent binary number.
   Then count 1 of each binary number.

*/


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
int b,c;

int d2b(int n)
{
	int a;
	b=0;
	while(n!=0)
	{
		a=n%2;
		n=n/2;

		if(a==1)
		b++;
	}

	return b;
}

int d2h(int n)
{
	int p,q;
	c=0;
	while((n%10)>0)
	{
		p=n%10;
		q=d2b(p);
		c+=q;
		n=n/10;
	}

	return c;
}

int main()
{
	//freopen("chk.txt","r",stdin);

	int tc,m,x,y;
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%d",&m);
		x=d2b(m);
		y=d2h(m);
		printf("%d %d\n",x,y);
	}

	return 0;

}
