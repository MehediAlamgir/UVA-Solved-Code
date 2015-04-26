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

	int tc,a,b,c,i;

	scanf("%d",&tc);

	for(i=0;i<tc;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if((a+b)<=c || (b+c)<=a || (c+a)<=b)
		printf("Wrong!!\n");

		else printf("OK\n");

	}

	return 0;

}
