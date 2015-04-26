#include<stdio.h>
int main()
{
    int n;
    for(; ;)
    {

        scanf("%d",&n);
        if(n==0) break;
        if(n<=100)
        {
            printf("f91(%d) = 91\n",n);
        }

        if(n>=101)
        {
            printf("f91(%d) = %d\n",n,n-10);
        }

    }
    return 0;
}
