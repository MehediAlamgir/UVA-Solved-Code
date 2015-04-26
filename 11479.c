#include<stdio.h>


int main()
{
long tc, cn, b1,b2,b3;

scanf ("%ld", &tc);
for(cn=1;cn<=tc;cn++)
{
scanf("%ld %ld %ld",&b1,&b2,&b3);

if ( ((b1+b2)<=b3 )||((b1+b3)<=b2)||((b2+b3)<=b1))
{
printf("Case %ld: Invalid\n",cn);
}

else if ( (b1==b2) && (b2==b3) )
{
printf ("Case %ld: Equilateral\n", cn);
}

else if ( ((b1==b2) || (b2==b3) || (b1==b3) ) )
{
printf ("Case %ld: Isosceles\n", cn);
}

else if((b1!=b2)||(b2!=b3)||(b1!=b3))
printf ("Case %ld: Scalene\n", cn);


}


return 0;
}
