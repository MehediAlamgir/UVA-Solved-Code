#include<stdio.h>

int main()
{
    int t1,t2, f, atd, ct1, ct2, ct3, cn, tc,nct,act,fg;
    scanf("%d", &tc);


    for(cn=1 ; cn<=tc ; cn++ )
    {
        scanf("%d %d %d %d %d %d %d", &t1, &t2, &f, &atd, &ct1, &ct2, &ct3 ) ;

        if ( ( (ct1 > ct2) || (ct1>ct3) ) &&  ( (ct2>ct3) || (ct2>ct1) ) )
        {
            act=(ct1+ct2) / 2;
        }

     else   if  (   ( (ct1>ct2 )  || (ct1>ct3) ) &&  ( (ct3>ct2) || (ct3>ct1) ) )
        {
            act= (ct1+ct3) / 2;
        }

     else   if  ( ((ct3>ct2)  ||  (ct3>ct1) ) &&  ( (ct2>ct3) || (ct2>ct1) ) )
        {
            act=(ct2+ct3)/2;
        }

     else   if (  ( (ct3>ct2) || (ct3>ct1) ) && ( (ct1>ct2)  || (ct1>ct2) ) )

        {
            act=(ct3+ct1) / 2;
        }


   else     if ( ( (ct1>ct2) && (ct2==ct3) ) || ( (ct1>ct3) && (ct2==ct3)  )  )
        {
            act=(ct1+ct3) / 2;
        }

     else   if ( ( (ct3>ct2) && (ct1==ct2) )  || ( (ct3>ct1) && (ct1==ct2) ) )
        {
            act=(ct3+ct2)/2;
        }




        fg=t1+t2+f+atd+act;

        if (fg >= 90 )                   printf("Case %d: A\n", cn );

        if (fg >= 80 && fg < 90)         printf("Case %d: B\n", cn );

        if  (fg >= 70  && fg < 80)       printf("Case %d: C\n", cn );

        if  (fg >= 60  &&  fg < 70)      printf("Case %d: D\n", cn );

        if  (fg < 60)                    printf("Case %d: F\n", cn );


    }

    return 0;


}
