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

	int n,i,sum;
	printf("PERFECTION OUTPUT\n");

	while((scanf("%d",&n))==1)
	{
		if(n==0)
		{
			printf("END OF OUTPUT\n");
			break ;
		}

		sum=0;

		for(i=1;i<=(n/2);i++)
		{
			if(n%i==0)
			sum=sum+i;
		}

		if(sum==n)
		printf("%5d  PERFECT\n",n);

		else if(sum<n)
		printf("%5d  DEFICIENT\n",n);

		else if(sum>n)
		 printf("%5d  ABUNDANT\n",n);

	}


	return 0;

}
