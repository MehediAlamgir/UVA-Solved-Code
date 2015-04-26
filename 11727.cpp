#include<stdio.h>

int main()
{
	int tc,cn,s1,s2,s3;
	scanf("%d", &tc);
	for(cn=1;cn<=tc;cn++)
	{
		scanf("%d %d %d",&s1,&s2,&s3);
		if ((s1<s2 && s2<s3) || (s3<s2 && s2<s1))
		{
			printf("Case %d: %d\n",cn,s2);
		}

		 if ((s1<s3 && s3<s2) || (s2<s3 && s3<s1))
		{
			printf("Case %d: %d\n",cn,s3);
		}

	   if ((s2<s1 && s1<s3) || (s3<s1 && s1<s2))
		{
			printf("Case %d: %d\n",cn,s1);
		}

	}

		return 0;
	}
