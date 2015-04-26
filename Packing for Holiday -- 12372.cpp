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

	int l,w,h,tc,cn;
	scanf("%d",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%d %d %d",&l,&w,&h);

		if(l<=20 && w<=20 && h<=20)
		printf("Case %d: good\n",cn);

		else printf("Case %d: bad\n",cn);
	}

	return 0;

}
