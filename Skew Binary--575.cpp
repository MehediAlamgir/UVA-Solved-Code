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
	int l,i,a,b,res,j;
	char n[1000];

while(gets(n))
	{
		l=strlen(n);

	if(l==1 && (n[0]-48)==0) break;
	//l=strlen(n);
	res=0;
	for(i=0;i<l;i++)
	{
		a=l-i;
		j=pow(2,a);
		b=(n[i]-48)*(j-1);
		res=b+res;

	}

	printf("%d\n",res);

	}

	return 0;

}
