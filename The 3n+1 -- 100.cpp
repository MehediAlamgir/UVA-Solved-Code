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

	long long n1,n2,i,j,k,c,temp;

	while((scanf("%lld %lld",&n1,&n2))==2)
	{
		printf("%lld %lld",n1,n2);
		if(n1>n2)
		{
			temp=n2;
			n2=n1;
			n1=temp;
		}
		c=0;
		for(i=n1;i<=n2;i++)
		{
			j=i;
			k=1;
			while(j!=1)
			{
				if(j%2==1)
				j=3*j+1;

				else j=j/2;
				k++;
			}

			if(k>c)
			c=k;
		}

		printf(" %lld\n",c);
	}



	return 0;

}
