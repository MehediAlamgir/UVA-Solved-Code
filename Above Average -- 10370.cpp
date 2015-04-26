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
	int tc,cn,t,i,j,a[1000];
	double cal,res,sum,cnt;

	scanf("%d",&tc);
	for(cn=0;cn<tc;cn++)
	{
		scanf("%d",&t);
		for(i=0;i<t;i++)
		{
			scanf("%d",&a[i]);
		}

		sum=0;
		for(j=0;j<i;j++)
		{
			sum+=a[j];
		}

		cal=(sum/t);

		cnt=0;

		for(i=0;i<t;i++)
		{

			if(a[i]>cal)
			{
				cnt++;
			}

		}

		res=(cnt*100)/t;

		printf("%.3lf%%\n",res);



	}

	return 0;

}
