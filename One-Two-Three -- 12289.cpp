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
	int tc,cn;
	char s[10],ch;
	scanf("%d",&tc);
	getchar();
	for(cn=1;cn<=tc;cn++)
	{

		gets(s);

		if(strlen(s)==5)
		printf("3\n");

		else if((s[0]=='o'&& s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e') )
		printf("1\n");

		else printf("2\n");
	}

	return 0;

}
