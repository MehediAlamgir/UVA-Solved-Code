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

	long long  tc,cn,a,b,res1,res2;

	scanf("%lld",&tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%lld %lld",&a,&b);



		if(a<b || (a+b)%2 !=0  ||  (a-b)%2 !=0)
		printf("impossible\n");


		else if(a>=b)
		{
			res1=(a+b)/2;
			res2=a-res1;

			printf("%lld %lld\n",res1,res2);
		}





	}

	return 0;

}
