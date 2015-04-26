#include<stdio.h>
int main()
{
    int tc,tm,cn,aom,r;
    int a[10000];
    scanf("%d", &tc);
    for(cn=1;cn<=tc;cn++)
    {

	   scanf("%d",&tm);
	   for(r=0;r<tm;r++)
	   {
	    scanf("%d",&a[r]);

	    aom=tm/2;

	    printf("Case %d: %d\n",cn,a[aom]);



	}

    return 0;


}
