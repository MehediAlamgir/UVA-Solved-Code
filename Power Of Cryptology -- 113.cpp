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

	double k,res,n,p;
	while ((scanf("%lf %lf",&n,&p)) !=EOF)
	{

	k=(1/n);
	res=pow(p,k);
	printf("%0.0lf\n",res);

	}

	return 0;

}
