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
	long long a,b,c,d,l,x,cnt,f;

	while ((scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&l))==5)
	{
		if(a==0 && b==0 && c==0 && d==0 && l==0)
		break;

		cnt=0;
		for(x=0;x<=l;x++)
		{
			f=a*(x*x) + (b*x) +c;

			if(f%d==0)
			cnt++;
		}

		printf("%lld\n",cnt);
	}

	return 0;

}
