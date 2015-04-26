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

     double   j,i,n,m,p,res,t,u;



	res=0;
   while((scanf("%lf %lf",&n,&m))==2)
    {
    	if(n== 0 && m==0)
    	break;

	   t=n;
	   u=m;


    	p=(n-m)+1;
		n=1;
    	for(i=p;i<=t;i++)
    	{
    		n*=i/m;
			m--;
    	}

        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",t,u,n);
    }

    return 0;

}
