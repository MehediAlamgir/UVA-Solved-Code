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
	long long tc,cn,num,s,sum,t1,t2,p,n;
	scanf("%lld",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%lld",&num);
		n=num;
		if(num<10)
		s=num*num;
		else
		{
			s=num;
			goto l;
		}

		l:
		while(s>9)
		{
			sum=0;
			while(s>0)
			{
				t1=s%10;
				p=t1*t1;
				sum+=p;
				t2=s/10;
				s=t2;

			}
			s=sum;
		}
		if(s==1)
		{
			printf("Case #%lld: %lld is a Happy number.\n",cn,n);
		}

		else printf("Case #%lld: %lld is an Unhappy number.\n",cn,n);
	}

	return 0;

}
