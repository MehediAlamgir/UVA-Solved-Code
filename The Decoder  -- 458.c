#include <string.h>
#include <stdio.h>

int main()
{
	//freopen("chk.txt","r",stdin);

	char s[1000000];
	int l,i,p;


	while (gets(s))
	{
		l=strlen(s);
		for(i=0;i<l;i++)
		{

		printf("%c",s[i]-7);
		}
	printf("\n");
	}

	return 0;
}


