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
#define size 1000

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);

	int tc,cn,l,c1,c2,i;
	char s[size];

	scanf("%d",&tc);
	getchar();

	for(cn=1;cn<=tc;cn++)
	{

		gets(s);

		l=strlen(s);


		c1=0;
		c2=0;
		for(i=0;i<l;i++)
		{
			if(s[i]=='M')
			c1++;

			else if(s[i]=='F')
			c2++;
		}


		if((c1==1 && c2==1) || (c1 != c2))
		printf("NO LOOP\n");


		else printf("LOOP\n");


	}

	return 0;

}
