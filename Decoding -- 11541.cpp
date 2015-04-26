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
#define pf printf
#define sf scanf
#define i64 long long
#define siz 100000000 // 10^8
using namespace std;



int main()
{
 char arr[10000],str[10000];
 int r = 0;
 int cnt= 0 ;
    int k = 0 ,cn,tc,l,p;

	scanf("%d",&tc);
	getchar();
	for(cn=1;cn<=tc;cn++)
	{
		gets(arr);
		l=strlen(arr);

		printf("Case %lld: ",cn);


 for (int i = 0 ; i<l;i++)
 {
     r = 0 ;
     if (isalpha(arr[i]))
     {
         str[cnt++] = arr[i];
         continue;
     }

        while (!isalpha(arr[i]))
        {
            r = r*10 + arr[i]-48;
            i++;
            if (isalpha(arr[i]) )
            {
                str[cnt++] = arr[i];
                break;
            }

			if(arr[i]==NULL)
			{
				break;
			}
        }

        while (r--)
        {

            printf("%c",str[k]);
        }
        k++;


 }
 printf("\n");
 r=0;


	}

 return 0;
}
