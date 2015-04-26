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
	int n,sum,i,s;
while((scanf("%d",&n)) && n)
{


	if(n<10)
	printf("%d\n",n);


	if(n>9)
	{
		while(n>9)
		{
			sum=0;
			while(n>0)
			{
			sum=sum+(n%10)	;
			n=n/10;
			}
			n=sum;
		}
		printf("%d\n",sum);
	}
}

	return 0;

}
