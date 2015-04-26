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
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define MX 1000010
#define MOD 1000000007

using namespace std;

char a[1000];

void up(char *a , int len)
{

    for (int i = 0 ; i<len ; i++)
    {
        char c = a[i];
        a[i]=toupper(c);

    }
}

int main()
{
	//freopen("chk.txt","r",stdin);

	char a[1000],p,q,d;
	int i,j,l;
	bool b,r;

	b=false;
	r=1;
	//while(gets(a))
	for (; ;)
	{

		gets(a);

		if(a[0]=='*')
		break;


		l=strlen(a);

		up(a,l);
		for(i=0;i<l;i++)
		{
			p=a[0];

			if(a[i]==' ')
			{
				q=a[i+1];

				if(p==q)
				b=true;

				else
				{
					printf("N\n");
					b=false;
					r=0;
					break;
				}
			}
		}

		if(b==true || r==1)
		{
		printf("Y\n");

		}

		r=1;


	}

	return 0;

}
