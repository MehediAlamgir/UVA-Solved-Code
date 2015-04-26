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
vector <string> v;

int main()
{
        //freopen("chk.txt","r",stdin);

        char str[102];
        int tc,cn,i,j,n[101],max;
        scanf("%d",&tc);
        for(cn=1;cn<=tc;cn++)
        {
                max=0;
                for(i=0;i<10;i++)
                {
					scanf("%s",&str);
                        scanf("%d",&n[i]);
                        if(n[i] > max)
                        {
							max = n[i];
                        }
            v.push_back(str);
                }
                cout<<"Case #"<<cn<<":\n";
        for (i =0 ; i<10 ; i++)
			{
				if (n[i] >= max)
				{
					cout<<v[i] <<endl;
				}
			}
			v.clear();

        }

        return 0;

}
