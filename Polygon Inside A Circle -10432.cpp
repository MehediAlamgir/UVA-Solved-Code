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

	double a,r,n,s;

	while((scanf("%lf %lf",&r,&n))==2)
	{
		s=sin(acos(-1)*2/n);
		a=(r*r*n*s)/2;

		printf("%0.3lf\n",a);
	}

	return 0;

}
