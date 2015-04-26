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
	long long n,res,cn;
	//freopen("chk.txt","r",stdin);
	for(cn=1; ;cn++)
	{
		scanf("%lld",&n);
		if(n==0)
		break;

		res=ceil((3+sqrt(9+(8*n)))/2);

		printf("Case %lld: %lld\n",cn,res);
	}

	return 0;

}
