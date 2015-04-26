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

	char s[1000000];
	int l,i,c=0;
	while (gets(s))
	{
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='"')
			{
				c++;
				if(c%2==0)
				printf("''");

				else printf("``");


			}

			else printf("%c",s[i]);

		}

		printf("\n");
	}

	return 0;

}
