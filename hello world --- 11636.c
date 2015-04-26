#include<stdio.h>
#include<math.h>

int main()
{
   int cn=1,i,num,ans,p;

    while(scanf("%d",&num)!=EOF)
    {
	   if(num<0) break;
	   for(i=0 ; ; i++)
	   {
	   p=pow(2,i);

	   if(p>=num)
	   {
		  ans=i;
		  break;
	   }
        }
	   printf("Case %d: %d\n",cn,ans);
	   cn++;
    }

    return 0;
}
