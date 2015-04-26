#include<stdio.h>

int main()
{
	int n,num[100000],i,j,flip,temp;
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
		{

		scanf("%d",&num[i]);
		}
		flip=0;

		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(num[j] > num[j+1])
				{
					temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;

					flip ++;
				}
			}
		}


		printf("Minimum exchange operations : %d\n",flip);



		}

		return 0;


	}
