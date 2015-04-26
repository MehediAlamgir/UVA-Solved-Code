#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

int main ()
{
	//freopen("chk.txt","r",stdin);

    char a[1000],ch;
    int l,i;
    while((scanf("%s%c",&a,&ch))==2)
    {
        l=strlen(a);
        for(i=l-1;i>=0;i--)
        {
            printf("%c",a[i]);

        }
        printf("%c",ch);
    }
    return 0;

}
