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

	int tc,cn,length,i,j,temp,a[1000],cnt;
	scanf("%d",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%d",&length);
		for(j=1;j<=length;j++)
		{
			scanf("%d",&a[j]);
		}
		cnt=0;

		for(i=1;i<=length;i++)
		{

			for(j=1;j<=length-1;j++)
			{
				if(a[j] > a[j+1])
				{
					temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
					cnt++;
				}

			}
		}

		printf("Optimal train swapping takes %d swaps.\n",cnt);
	}

	return 0;

}
