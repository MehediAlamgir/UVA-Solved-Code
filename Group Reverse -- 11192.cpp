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
#define size 101

using namespace std;

int main()
{
//	freopen("chk.txt","r",stdin);
	char str[size],ch;
	int g,i,j,len,gl,t1,t2;

	while((scanf("%d",&g))==1)
	{

		if(g==0)
		break;


		scanf(" %s",&str);

		len=strlen(str);

		gl=len/g;


		for(i=1;i<=g;i++)
		{

			t1=i*gl;

			t2=t1-gl;

			for(j=t1-1;j>=t2;j--)
			{
				printf("%c",str[j]);
			}

		}

		printf("\n");

	}

	return 0;

}
