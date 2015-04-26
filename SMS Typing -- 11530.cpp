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
	char ch[1000];
	int tc,cn,l,i,sum;

	scanf("%d",&tc);
	getchar();
	for(cn=1;cn<=tc;cn++)
	{
		gets(ch);
		l=strlen(ch);
		sum=0;
		for(i=0;i<l;i++)
		{
			if(ch[i]=='a'||ch[i]=='d'||ch[i]=='g'||ch[i]=='j'||ch[i]=='m'||ch[i]=='p'||ch[i]=='t'||ch[i]=='w'||ch[i]==' ')
			{
				sum+=1;
			}

			else if(ch[i]=='b'||ch[i]=='e'||ch[i]=='h'||ch[i]=='k'||ch[i]=='n'||ch[i]=='q'||ch[i]=='u'||ch[i]=='x')
			{
				sum+=2;
			}
			else if(ch[i]=='c'||ch[i]=='f'||ch[i]=='i'||ch[i]=='l'||ch[i]=='o'||ch[i]=='r'||ch[i]=='v'||ch[i]=='y')
			{
				sum+=3;
			}

			else if(ch[i]=='s'||ch[i]=='z')
			{
				sum+=4;
			}

		}

		printf("Case #%d: %d\n",cn,sum);

	}

	return 0;

}
