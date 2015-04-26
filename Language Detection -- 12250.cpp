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
	string ch;
	int i,cn,len;

	//for(cn=1; ;cn++)
	cn=1;
	while(cin>>ch && ch != "#")
	{

		 if(ch=="HELLO")
		printf("Case %d: ENGLISH\n",cn++);

		else if(ch=="HOLA")
		printf("Case %d: SPANISH\n",cn++);

		else if(ch=="HALLO")
		printf("Case %d: GERMAN\n",cn++);

		else if(ch=="BONJOUR")
		printf("Case %d: FRENCH\n",cn++);

		else if(ch=="CIAO")
		printf("Case %d: ITALIAN\n",cn++);

		else if(ch=="ZDRAVSTVUJTE")
		printf("Case %d: RUSSIAN\n",cn++);

		else printf("Case %d: UNKNOWN\n",cn++);

	}

	return 0;

}
