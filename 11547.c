#include<stdio.h>

int main()
{
    int tc, n,i,c1,c2,c3,c4,c5,c6,tcn1,tcn2;
    scanf ("%d", &tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&n);
        c1=(n*567);
        c2=c1/9;
        c3=c2+7492;
        c4=c3*235;
        c5=c4/47;
        c6=c5-498;

        tcn1=(c5-498) % 100 ;
        tcn2=abs(tcn1/10);
        printf ("%d\n",tcn2);

    }



    return 0;
}
