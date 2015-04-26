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
	int h1,m1,h2,m2,p,q,min;
	for(; ; )
	{
		scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
		if(h1==0 && m1==0 && h2==0 &&m2==0 )
		{
			break;
		}
		else if(h1==0)
		h1=24;
		else if(h2==0)
		h2=24;

		p=(h1*60)+m1;
		q=(h2*60)+m2;

		if(q>p)
		{
			min=q-p;
		}

		else min=(24*60)-abs(q-p);// joto min gumaici 24h theke ta bad dilei sleping min pawa jabe

		printf("%d\n",min);

	}

	return 0;

}
