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

	long long int a,b,c,d,tc,cn;

	scanf("%lld",&tc);

	for(cn=1;cn<=tc;cn++)
	{
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

		if(a==b && b==c && c==d && d==a )
		printf("square\n");

		else if((a==b && c==d) || (b==c && d==a) || (a==c && b==d))
		printf("rectangle\n");

		else if((a<b+c+d) && (b<a+c+d) && (c<a+b+d) && (d<b+c+a))
		printf("quadrangle\n");

		else
		printf("banana\n");


	}

	return 0;

}
