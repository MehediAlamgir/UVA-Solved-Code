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
	long long tc,cn,n,r,cnt,t1,t2,t3,t4;

	scanf("%lld",&tc);

	for(cn=1;cn<=tc;cn++)
	{
		scanf("%lld",&n);
		t3=n;
		r=0;
		while (n>0)
		{
			r=(r * 10) + (n % 10);
			n=n/10;
		}
		t4=r;

		cnt=0;

		if(t3==t4)
		{
			printf("%lld %lld\n",cnt,t3);
		}

		r=0;

l:
		 if(t3!=t4)
		{
			t1=t3+t4;
			cnt++;
			t3=t1;
			//t2=strrev(n);
			while(t1>0)
			{
				r=(r*10) + (t1%10);
				t1=t1/10;



			}



			t4=r;
			r=0;
			if(t3!=t4)
				goto l;


			printf("%lld %lld\n",cnt,t4);
		}



	}

	return 0;

}
