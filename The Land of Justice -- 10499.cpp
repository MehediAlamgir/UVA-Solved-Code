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
	long long num,ans;

	for(; ;)
	{
		scanf("%lld",&num);

		if(num<0)
		break;

		else if(num==1)
		printf("0%%\n");

		else
		{
			ans=num*25;
			printf("%lld%%\n",ans);
		}
	}


	return 0;

}
