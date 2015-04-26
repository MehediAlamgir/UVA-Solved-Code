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
	int x1,y1,x2,y2,s,a,t1,t2;
	for(; ;)
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

		t1=abs(x1-x2);
		t2=abs(y1-y2);
		if(x1==0 && y1==0&& x2==0 && y2==0)
		break;

		else if(x1==x2 && y1==y2)
		printf("0\n");

		else if ((t1==t2) || ((x1==x2) || (y1==y2)))
		printf("1\n");

		else printf("2\n");

	}


	return 0;

}
