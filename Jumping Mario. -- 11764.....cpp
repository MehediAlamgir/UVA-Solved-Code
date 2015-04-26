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
	freopen("chk.txt","r",stdin);
	int tc,cn,n,i,j,h,l,a[100];

	scanf("%d",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		h=0;
		l=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)

			scanf("%d",&a[i]);

		for(j=1;j<n;j++)
		{

			if(a[j]>a[j-1])
			h++;

			else if(a[j-1]>a[j])
			l++;
		}

		printf("Case %d: %d %d\n",cn,h,l);
	}

	return 0;

}
