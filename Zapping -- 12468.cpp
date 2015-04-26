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
	int a,b,res,t;
	for(; ;)
	{
		scanf("%d %d",&a,&b);
		if(a<0 && b<0)
		{
		break;
		}

		else
		{
			res=abs(a-b);
			t=res;

			if(res>50)
			{
				res=100-t;
			}
		}

		printf("%d\n",res);
	}

	return 0;

}
