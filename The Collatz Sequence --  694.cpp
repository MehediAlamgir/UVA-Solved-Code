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

	long  a,l,temp;
	int tc,cn,cnt;
	for(cn=1; ; cn++)
	{
		scanf("%ld %ld",&a,&l);
		temp=a;
		if(a<0 || l<0) break;

		cnt=1;
		if(a==1)
		{
			break;
		}

		while(a!=1)
		{
			if(a%2==0)
			{
				a=a/2;

				if(a>l)
				{
				break;
				}

				cnt++;
				if(a==1)
				{
					break;
				}


			}

			if(a%2!=0)
			{
				a=(a*3)+1;

				if(a>l)
				{
				break;
				}

				cnt++;

				if(a==1)
				{
					break;
				}
			}
		}

		printf("Case %d: A = %ld, limit = %ld, number of terms = %d\n",cn,temp,l,cnt);
	}

	return 0;

}
