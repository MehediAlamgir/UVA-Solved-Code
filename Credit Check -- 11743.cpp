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
	//freopen("chk.txt","r",stdin);
	int cn,tc,sum1,sum2,res,x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d,t1,t2,t3,t4,p1,p2,p3,p4,q1,q2,q3,q4,m1,m2,m3,m4;

	scanf("%d",&tc);

	for(cn=1;cn<=tc;cn++)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		x1=0;
		y1=0;
		while (a>0)
		{
			m1=a%10;
			y1+=m1;

			t1=a/10;

			p1=t1%10;
			a=t1/10;
			q1=p1*2;
			if(q1<10)
			{
				x1+=q1;
			}
			else x1+=(q1%10)+1;
		}

		x2=0;
		y2=0;
		while (b>0)
		{
			m2=b%10;
			y2+=m2;

			t2=b/10;

			p2=t2%10;
			b=t2/10;
			q2=p2*2;
			if(q2<10)
			{
				x2+=q2;
			}
			else x2+=(q2%10)+1;
		}

		x3=0;
		y3=0;

		while (c>0)
		{
			m3=c%10;
			y3+=m3;

			t3=c/10;

			p3=t3%10;
			c=t3/10;
			q3=p3*2;
			if(q3<10)
			{
				x3+=q3;
			}
			else x3+=(q3%10)+1;
		}

		x4=0;
		y4=0;
		while (d>0)
		{
			m4=d%10;
			y4+=m4;

			t4=d/10;

			p4=t4%10;
			d=t4/10;
			q4=p4*2;
			if(q4<10)
			{
				x4+=q4;
			}
			else x4+=(q4%10)+1;
		}

		sum1=x1+x2+x3+x4;

		sum2=y1+y2+y3+y4;


		res=sum1+sum2;

		if(res%10==0)
		{
			printf("Valid\n");
		}

		else printf("Invalid\n");

	}

	return 0;

}
