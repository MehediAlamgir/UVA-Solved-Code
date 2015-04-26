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


/* Euler said "Every even number greater than or equal to 4 can be expressed as the sum of two prime numbers."
	As here input starts from 6 , so there's no possibility to have the output "Goldbach's conjecture is wrong."*/

LL N,status[1000001];

void prime()
{
	int i,j,sqrtN;
	N=1000000;

	for(i=2;i<=N;i++)
	status[i]=0;

	sqrtN=sqrt(N);

	for(i=3;i<=sqrtN;i+=2)
	{
		if(status[i]==0)
		{
			for(j=i*i; j<=N ; j+=i+i)
			status[j]=1;
		}

	}
}



int main()
{
	//freopen("chk.txt","r",stdin);

	LL num,p1,p2,p,q;
	prime();

	for(; ;)
	{
		scanf("%lld",&num);
		if(num==0)
		break;

		for(p=3;p<=N ;p+=2)
		{
			q=num-p;
			if(status[p]==0 && status[q]==0)
			{
				printf("%lld = %lld + %lld\n",num,p,q);
				break;
			}

		}

	}
	return 0;

}
