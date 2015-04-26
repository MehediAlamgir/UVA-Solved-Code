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

	double x1,y1,x2,y2,x3,y3,p,q,r,rad,a,b,crcmfrnc;

	while((scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)) ==6)
	{
		p=sqrt(((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2)));
		q=sqrt(((x2-x3)*(x2-x3)) + ((y2-y3)*(y2-y3)));
		r=sqrt(((x3-x1)*(x3-x1)) + ((y3-y1)*(y3-y1)));

		a=(p+q+r)/2;

		b=sqrt(a*(a-p)*(a-q)*(a-r));

		rad=(p*q*r)/(4*b);

		crcmfrnc=2*3.141592653589793*rad;

		printf("%0.2lf\n",crcmfrnc);

	}

	return 0;

}
