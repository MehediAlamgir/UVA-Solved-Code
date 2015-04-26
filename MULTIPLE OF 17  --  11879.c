#include<stdio.h>


int main()
{
    long long i,r,n,l,a;
    char arr[2000];

   for(; ;) {
	  scanf("%s",&arr);

    if(arr[0]=='0') break;
    l=strlen(arr);
    r=0;
    for(i=0;i<l;i++)
    {
	   r=(r*10+arr[i]-48) %17;
    }



    if(r==0)
    {
	   printf("1\n");
    }

    else printf("0\n");

    }

    return 0;
}
