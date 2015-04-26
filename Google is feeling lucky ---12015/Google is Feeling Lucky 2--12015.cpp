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

	char str[1000][1000];
	int tc,cn,i,j,n[1000],max;

	scanf("%d",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		max=0;
		for(i=0;i<10;i++)
		{
			scanf("%s %d",&str[i],&n[i]);

			if(n[i] > max)
			{
				max = n[i];
			}

		}

		printf("Case #%d:\n",cn);

		for(i=0;i<10;i++)
		{
			if(n[i] == max)
			{
				printf("%s\n",str[i]);
			}
		}

	}

	return 0;

}

