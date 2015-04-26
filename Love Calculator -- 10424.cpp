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
    char s[1000], ch[1000];

    int i,sum1,sum2,len1,len2;

    double res,s1,s2,p1,p2,q1,q2;

    while(gets(s))
     {
     	gets(ch);

     	sum1=0;

     	len1=strlen(s);

     	len2=strlen(ch);

		for( i=0;i<len1;i++)
		{
				if(s[i]=='A' || s[i]=='a')
					sum1+= 1;
				else if(s[i]=='B' || s[i]=='b')
					sum1+= 2;
				else if(s[i]=='C' || s[i]=='c')
					sum1+= 3;
				else if(s[i]=='D' || s[i]=='d')
					sum1+= 4;
				else if(s[i]=='E' || s[i]=='e')
					sum1+= 5;
				else if(s[i]=='F' || s[i]=='f')
					sum1+= 6;
				else if(s[i]=='G' || s[i]=='g')
					sum1+= 7;
				else if(s[i]=='H' || s[i]=='h')
					sum1+= 8;
				else if(s[i]=='I' || s[i]=='i')
					sum1+= 9;
				else if(s[i]=='J' || s[i]=='j')
					sum1+= 10;
				else if(s[i]=='K' || s[i]=='k')
					sum1+= 11;
				else if(s[i]=='L' || s[i]=='l')
					sum1+= 12;
				else if(s[i]=='M' || s[i]=='m')
					sum1+= 13;
				else if(s[i]=='N' || s[i]=='n')
					sum1+= 14;
				else if(s[i]=='O' || s[i]=='o')
					sum1+= 15;
				else if(s[i]=='P' || s[i]=='p')
					sum1+= 16;
				else if(s[i]=='Q' || s[i]=='q')
					sum1+= 17;
				else if(s[i]=='R' || s[i]=='r')
					sum1+= 18;
				else if(s[i]=='S' || s[i]=='s')
					sum1+= 19;
				else if(s[i]=='T' || s[i]=='t')
					sum1+= 20;
				else if(s[i]=='U' || s[i]=='u')
					sum1+= 21;
				else if(s[i]=='V' || s[i]=='v')
					sum1+= 22;
				else if(s[i]=='W' || s[i]=='w')
					sum1+= 23;
				else if(s[i]=='X' || s[i]=='x')
					sum1+= 24;
				else if(s[i]=='Y' || s[i]=='y')
					sum1+= 25;
				else if(s[i]=='Z' || s[i]=='z')
					sum1+= 26;

     }


		s1=0;

		while(sum1>9)
		{
			p1=sum1 % 10;
			s1+=p1;
			q1=sum1 / 10;
			q1+=s1;
			sum1=q1;
			s1=0;
		}

		sum2=0;

		for( i=0;i<len2;i++)
		{
			 if(ch[i]=='A' || ch[i]=='a')
				sum2+= 1;
			else if(ch[i]=='B' || ch[i]=='b')
				sum2+= 2;
			else if(ch[i]=='C' || ch[i]=='c')
				sum2+= 3;
			else if(ch[i]=='D' || ch[i]=='d')
				sum2+= 4;
			else if(ch[i]=='E' || ch[i]=='e')
				sum2+= 5;
			else if(ch[i]=='F' || ch[i]=='f')
				sum2+= 6;
			else if(ch[i]=='G' || ch[i]=='g')
				sum2+= 7;
			else if(ch[i]=='H' || ch[i]=='h')
				sum2+= 8;
			else if(ch[i]=='I' || ch[i]=='i')
				sum2+= 9;
			else if(ch[i]=='J' || ch[i]=='j')
				sum2+= 10;
			else if(ch[i]=='K' || ch[i]=='k')
				sum2+= 11;
			else if(ch[i]=='L' || ch[i]=='l')
				sum2+= 12;
			else if(ch[i]=='M' || ch[i]=='m')
				sum2+= 13;
			else if(ch[i]=='N' || ch[i]=='n')
				sum2+= 14;
			else if(ch[i]=='O' || ch[i]=='o')
				sum2+= 15;
			else if(ch[i]=='P' || ch[i]=='p')
				sum2+= 16;
			else if(ch[i]=='Q' || ch[i]=='q')
				sum2+= 17;
			else if(ch[i]=='R' || ch[i]=='r')
				sum2+= 18;
			else if(ch[i]=='S' || ch[i]=='s')
				sum2+= 19;
			else if(ch[i]=='T' || ch[i]=='t')
				sum2+= 20;
			else if(ch[i]=='U' || ch[i]=='u')
				sum2+= 21;
			else if(ch[i]=='V' || ch[i]=='v')
				sum2+= 22;
			else if(ch[i]=='W' || ch[i]=='w')
				sum2+= 23;
			else if(ch[i]=='X' || ch[i]=='x')
				sum2+= 24;
			else if(ch[i]=='Y' || ch[i]=='y')
				sum2+= 25;
			else if(ch[i]=='Z' || ch[i]=='z')
				sum2+= 26;


		}


		s2=0;
		while(sum2>9)
		{
			p2=sum2 % 10;
			s2+=p2;
			q2=sum2 / 10;
			q2+=s2;
			sum2=q2;
			s2=0;
		}

		if(sum2<sum1)
		res=((double)sum2 /(double)sum1)*100;

		else res=((double)sum1 /(double)sum2)*100;

		printf("%.2lf %%\n",res);

    }


    return 0;

}
