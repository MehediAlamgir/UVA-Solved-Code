#include <stdio.h>
#include<math.h>


int main()
{
long m,n,a,b;
while(scanf("%ld %ld",&a,&b))
{
if(a==0&&b==0)break;
m=sqrt(a);
if(m*m==a)m--;
n=sqrt(b);

m=n-m;
printf("%ld\n",m);

}

}
