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
#define toUpperCase(s) for(int i=0;s[i];i++) s[i]>='a'&&s[i]<='z'?s[i]-=32:s[i];
#define toLowerCase(s) for(int i=0;s[i];i++) s[i]>='A'&&s[i]<='Z'?s[i]+=32:s[i];

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);
	int tc,cn,len1,len2,i,cnt,c,f=0,g=0,j,l1,l2;
	char team[1000],judge[1000],a[1000],b[1000];


	scanf("%d",&tc);
	getchar();

	for(cn=1;cn<=tc;cn++)
	{


		gets(team);
		gets(judge);

		l1=0;
		l2=0;
		cnt=0;
		c=0;


		len1=strlen(team);
		len2=strlen(judge);


		if(strcmp(team,judge)!=0)
		{
			for(i=0;i<len1;i++)
			{
				if(isalpha(team[i]))
				{
					a[cnt]=team[i];
					cnt++;
					l1++;
				}

			}

			for(i=0;i<len2;i++)
			{

					if(isalpha(judge[i]))
				{
					b[c]=judge[i];
					c++;
					l2++;
				}

			}

		}

		 if(strcmp(team,judge)==0)
		{
			printf("Case %d: Yes\n",cn);
		}


		else if ((strcmp(a,b) ==0 ) && (len1!=len2))
		{

			printf("Case %d: Output Format Error\n",cn);
		}



		else printf("Case %d: Wrong Answer\n",cn);

		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));


}

	return 0;

	}
