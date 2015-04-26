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

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);
	long long tc,cn,t,a[1000],i,m=0,j,x,temp;

	scanf("%lld",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%lld",&t);
		m=0;
		for(i=0;i<t;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]>m)
			m=a[i];
		}


		printf("Case %lld: %lld\n",cn,m);
	}

	return 0;

}
