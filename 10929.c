#include<stdio.h>


int main()
{
    long long i,r,l;
    char arr[2000];

   for(; ;) {
	  scanf("%s",&arr);

    if(arr[0]=='0' && arr[1]=='\0') break;
    l=strlen(arr);
    r=0;
    for(i=0;i<l;i++)
    {
	   r=(r*10+arr[i]-48) %11;
    }



    if(r==0)
    {
	   printf("%s is a multiple of 11.\n",arr);
    }

    else printf("%s is not a multiple of 11.\n",arr);

    }

    return 0;
}
