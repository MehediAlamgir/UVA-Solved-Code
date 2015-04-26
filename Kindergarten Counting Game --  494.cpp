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
	char str[1000];
	int len,i,count;;
	while(gets(str))
	{
		len=strlen(str);
		count=0;
		for(i=0;i<len;i++)
		{
			if(!((str[i-1]>='A' && str[i-1]<='Z') || (str[i-1]>='a' && str[i-1]<='z')))
			{
				if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
				{
					count++;
				}

			}


		}
		printf("%d\n",count);
	}

	return 0;

}
