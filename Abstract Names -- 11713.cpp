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
	char c[21],ch[21];
	int tc,i,len1,len2,cn,cnt;

	scanf("%d",&tc);

	for(cn=1;cn<=tc;cn++)
	{
		scanf("%s",&c);
		scanf("%s",&ch);

		len1=strlen(c);
		len2=strlen(ch);

		if(len1 != len2)
		{
			printf("No\n");
		}



		else
		{
			cnt=0;
			for(i=0;i<len1;i++)
			{
				if((c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u') &&(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'))
				continue;


				 if(c[i] != ch[i])
				cnt++;

			}

			if(cnt==0)
			printf("Yes\n");

			else printf("No\n");
		}
	}

	return 0;

}
