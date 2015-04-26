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
	LL a[1000],i,j,cnt,len,l1,l2,l3,l4,l5,l6,c,p,q,r,s,t,u;
	char str[1000],arr[1000];
	while((scanf("%s",&str))==1)
	{
		len=strlen(str);
		cnt=0;
		c=0;
		l1=l2=l3=l4=l5=l6=0;
		p=q=r=s=t=u=0;

		for(i=0;i<len;i++)
		{
			if((str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V'))
			{
				p=1;

				if(str[i-1]==str[i] || str[i-1]=='B' ||str[i-1]=='F' ||str[i-1]=='P' ||str[i-1]=='V')
					continue;


				if(arr[c++]==str[i])
				{
					l1++;
					if(l1>1 && l1<3)
					{
						a[cnt++]==1;
						arr[c++]=str[i];
					}

				}


				else
				{
					a[cnt++]=1;
					arr[c++]=str[i];

				}

			}

			if ((str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z'))
			{
				q=1;
				if(str[i-1]==str[i] || str[i-1]=='C' ||str[i-1]=='G' ||str[i-1]=='J' ||str[i-1]=='K' || str[i-1]=='Q' || str[i-1]=='S'|| str[i-1]=='X' || str[i-1]=='Z')
					continue;


				if(arr[c++]==str[i])
				{
					l2++;
					if(l2>1 && l2<3)
					{
						a[cnt++]==2;
						arr[c++]=str[i];
					}

				}


				else
				{
					a[cnt++]=2;
					arr[c++]=str[i];

				}

			}

			if ((str[i]=='D'||str[i]=='T'))
			{
				r=1;
				if(str[i-1]==str[i] || str[i-1]=='D' ||str[i-1]=='T' )
					continue;


				if(arr[c++]==str[i])
				{
					l3++;
					if(l3>1 && l3<3)
					{
						a[cnt++]==3;
						 arr[c++]=str[i];
					}

				}

				else
				{
					a[cnt++]=3;
					arr[c++]=str[i];


				}

			}

			if((str[i]=='L'))
			{
				s=1;
					if(str[i-1]==str[i] || str[i-1]=='L' )
					continue;

				if(arr[c++]==str[i])
				{
					l4++;
					if(l4>1 && l4<3)
					{
						a[cnt++]==4;
						arr[c++]=str[i];
					}

				}

				else
				{
					a[cnt++]=4;
					arr[c++]=str[i];

				}

			}

			if((str[i]=='M'||str[i]=='N'))
			{
				if(str[i-1]==str[i] || str[i-1]=='M' ||str[i-1]=='N' )
					continue;

				t=1;
				if((arr[c++]==str[i]))
				{
					l5++;
					if(l5>1 && l5<53)
					{
						a[cnt++]==5;
						arr[c++]=str[i];
					}
				}


				else
				{
					a[cnt++]=5;
					arr[c++]=str[i];
				}


			}

			if((str[i]=='R'))
			{
				u=1;
				if(str[i-1]==str[i] || str[i-1]=='R')
					continue;


				if(arr[c++]==str[i])
				{
					l6++;
					if(l6>1 && l6<3)
					{
						a[cnt++]==6;
						arr[c++]=str[i];

					}


				}

				else {
					a[cnt++]=6;
					arr[c++]=str[i];


				}


			}
		}

		for(j=0;j<cnt;j++)
		{

		printf("%lld",a[j]);

		}

		printf("\n");
	}


	return 0;

}
