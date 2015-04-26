#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
int s,r,sum=0,k;


while(scanf("%d",&s)!=EOF)

{

if(s==2)
{
printf("3\n");
}
else {

sum=0;
k=0;
r=0;
k=s;

while (s!=1)

{
r=s%3;
s=s/3;

if(s==0)
{
break;
}

sum=sum+s;

s=s+r;
if(s==2)
{
s=s+1;
}

}

printf("%d\n",sum+k);
}

}


return 0;

}
