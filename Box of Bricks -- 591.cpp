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
	int num,i,a[1000],c1,cnt1,cnt2,tc,cn,c,sum,p[1000],j,k,n1,avg;

	for( cn=1; ; cn++)
	{
		scanf("%d",&num);
		if(num==0)
		{
			break;
		}
		for(i=0;i<num;i++)
		{
			scanf("%d",&a[i]);
		}

			sum=0;

			for(c=0;c<i;c++)
			{
				sum += a[c];
			}

			avg=sum/num;

			cnt2=0;
			for(k=0;k<i;k++)
			{
				if(a[k]>avg)
				{
                    n1=a[k]-avg;
                    cnt2 += n1;
				}

			}

				printf("Set #%d\n",cn);
                printf("The minimum number of moves is %d.\n\n",cnt2);

		}

	return 0;

}
