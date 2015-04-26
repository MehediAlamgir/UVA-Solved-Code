#include<stdio.h>

int main()
{
    int tc;
    while(scanf("%d",&tc)!=EOF)
    {
	   int r=0,i,sum=0,t=0;
	  char c[100];

	   for(i=1;i<=tc;i++)
	   {
	   scanf("%s",&c);

	   if(c[0]=='d')
	   {
		scanf(" %d",&t);
		 sum=sum+t;
		}

	    else if(c[0]=='r')
		  {
			 printf("%d\n",sum);
		  }

		  }

    }


    return 0;
}
