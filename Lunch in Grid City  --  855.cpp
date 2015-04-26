/*
1.

2. what i understand ..
we all know that the median is
suppose, u r given ‘n’ numbers in an array p [].
if ( n == odd ) median = p [n / 2]
else median = p [(n - 1) / 2]

3. now we r given a 2d plane
and we need to find the median separately
all the values of street are saved in array p
all the values of avenue are saved in array q
sort p and q
then output the median

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

#define siz 50005
using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);

	int st[siz],av[siz],f,s,a,i,x,tc;
	scanf("%d",&tc);
	while (tc--)
	{
		scanf("%d %d %d",&s,&a,&f);

		for(i=0;i<f;i++)
		{
			scanf("%d %d",&st[i],&av[i]);
		}

		sort(st,st+f);
		sort(av,av+f);

		if(f%2==0)
		{
		x=f/2;
		printf("(Street: %d, Avenue: %d)\n",st[x-1],av[x-1]);
		}

		else
		{	 x=(f-1)/2;

			printf("(Street: %d, Avenue: %d)\n",st[x],av[x]);
		}

	}

	return 0;

}
