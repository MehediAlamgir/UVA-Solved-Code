#include<stdio.h>
#include<math.h>

int main()
{
    int fn,tn,cn;
    double u,v,t,s,a;
     cn=1;
    while( (scanf("%d",&fn) ) == 1 && fn!=0)
    {


    if(fn==1)
    {
        scanf("%lf %lf %lf",&u,&v,&t);
        a=(v-u)/t;
        s=u*t+(0.5*a*t*t);

        printf("Case %d: %0.3lf %0.3lf\n",cn,s,a);

    }


    else if(fn==2)
    {
        scanf("%lf %lf %lf",&u,&v,&a);
        t=(v-u)/a;
        s=u*t+(0.5*a*t*t);


       printf("Case %d: %0.3lf %0.3lf\n",cn,s,t);

    }

   else if(fn==3)
    {
       scanf("%lf %lf %lf",&u,&a,&s);
       v=sqrt(u*u+(2*a*s));
       t=(v-u)/a;
       printf("Case %d: %0.3lf %0.3lf\n",cn,v,t);

    }

    else if(fn==4)
    {
        scanf("%lf %lf %lf",&v,&a,&s);
        u=sqrt(v*v-(2*a*s));
        t=(v-u)/a;
        printf("Case %d: %0.3lf %0.3lf\n",cn,u,t);

    }

    cn++;

  }


  return 0;
}
