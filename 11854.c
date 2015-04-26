#include<stdio.h>

int main()
{
    int a,b,c , r1,r2,r3;


    for( ; ;)
    {
    scanf("%d %d %d", &a,&b,&c);

    r1= a*a;
    r2= b*b;
    r3= c*c;

    if(a==0 && b==0 && c==0)  break;



    if (  ( (r1+r2)== r3 )  ||  ( (r1+r3)== r2 ) ||  ( (r2+r3)== r1  ) )
    {
        printf("right\n");
    }

    else printf ("wrong\n");
    }

    return 0;



}
