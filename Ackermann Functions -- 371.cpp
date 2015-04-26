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

	long long n1,n2,i,j,k,m,temp,p,q,s,t,w,c;

	while((scanf("%lld %lld",&n1,&n2))==2)
	{
		if(n1==0 && n2==0)
		break;


		if(n1>n2)
		{
			temp=n2;
			n2=n1;
			n1=temp;
		}

		printf("Between %lld and %lld, ",n1,n2);

		m=0;
		c=0;
		for(i=n1;i<=n2;i++)
		{
			j=i;
			k=1;
			s=i;

			for(; ;)
			{

				if(j%2==1)
				j=3*j+1;

				else j=j/2;

				if(j==1)
				 break;

				k++;

				if(k>m)
				{

				m=k;
				c=i;

				}

			}



		}

		printf("%lld generates the longest sequence of %lld values.\n",c,m);
	}



	return 0;

}
