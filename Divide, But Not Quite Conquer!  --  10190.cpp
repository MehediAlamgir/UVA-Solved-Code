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

	long long n,m,t;
	char ch;

	while ((scanf("%lld %lld",&n,&m))==2)
	{
		t=n;

		if(n<2 || m<2 || n<m)
		{
			printf("Boring!\n");
			continue;

		}

		while (t % m == 0)
		{
			t=t/m;

		}


		if(t==1)
		{

			while(n !=1)
			{

			printf("%lld ",n);
			n=n/m;
			if(n==0)
			{
				break;
			}

			if(n==1)
			{
				printf("%lld",n);
				continue;
			}

			}
		}

		else if(t != 1)

		{

			printf("Boring!");

		}

		printf("\n");

	}

	return 0;

}
