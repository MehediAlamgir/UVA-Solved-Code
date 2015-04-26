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

	long long  n1,n2,c,c1,t1,t2,u1,u2,sum,i;



	while((scanf("%lld %lld",&n1,&n2))==2)
	{

		if(n1==0 && n2==0) break;

		c=0;
		c1=0;
		while(n1>0 || n2>0)
		{

			t1=n1%10;

			u1=n2%10;

			t2=n1/10;
			n1=t2;

			u2=n2/10;
			n2=u2;

			sum=t1+u1+c1;

			if(sum<=9)
			{
				c1=0;
			}

			else if(sum>9)
			{
					c++;
					c1=c;
					c1=1;
			}

		}


		if(c==0)
		printf("No carry operation.\n");

	    else 	if(c==1)
		printf("1 carry operation.\n");

		else if (c>1)
		 printf("%lld carry operations.\n",c);


	}


	return 0;

}
