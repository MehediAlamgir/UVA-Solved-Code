#include <set>
#include <stdio.h>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#define size 100001

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);

	long long  num,a[size],t,s;
	int i;

	a[0]=1;
	for(i=1;i<=10000;i++)
	{
		a[i]=(a[i-1]%10000000 * i)%10000000;
		while(a[i] %10==0)
		{
			a[i]/=10;
			a[i]%=10000000;
		}

	}

	while((scanf("%lld",&num))==1)
	{
		t=num;

		s=a[num]%10;
		printf("%5lld -> %lld\n",t,s);

	}

	return 0;

}
