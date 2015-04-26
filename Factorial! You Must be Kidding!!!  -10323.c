#include<stdio.h>


int main()
{
	long int n,f,result,c;

	while(scanf("%ld",&n) != EOF)
	{

		 result = 1;


	if(n>=0 && n<13)
	{
		for( c = 1 ; c <= n ; c++ )
         result = result*c;

		 if(result < 10000)	printf("Underflow!\n");

		 else printf("%d\n",result);

	}

	else	if(n==13) printf("6227020800\n");

	else if(n>13) 	printf("Overflow!\n");


	else if(n<0)
	{
		if(	n%2==0) printf("Underflow!\n");

		else if(n%2!=0) printf("Overflow!\n");
	}



	}
	return 0;
}
