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

	long long num;
	int i,j,b[100],count,c;
	while((scanf("%lld",&num))!=0)
	{
		if(num==0) break;
	count=0;
	c=0;
	for(i=0 ;num>0 ; i++)
	{
		b[i]=num%2;
		if(b[i]==1)
		count++;
		num=num/2;
		c++;

	}
	printf("The parity of ");

	for(j=c-1;j>=0;j--)

		printf("%d",b[j]);
		printf(" is %d (mod 2).",count);
		printf("\n");

	}
return 0;

}
