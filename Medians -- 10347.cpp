#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);

	double area,s,m1,m2,m3;

	while((scanf("%lf %lf %lfd",&m1,&m2,&m3))==3)
	{
		if((m1>=(m2+m3)) || (m2>=(m1+m3)) || (m3>=(m1+m2)))
			{
				printf("-1.000\n");

			}
			else
			{
				s=(m1+m2+m3)/2.0;
				area=(4.0/3.0)*(sqrt(s*(s-m1)*(s-m2)*(s-m3)));

				printf("%.3lf\n",area);

			}
	}

	return 0;

}
