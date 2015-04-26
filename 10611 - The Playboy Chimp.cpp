#include<bits/stdc++.h>

using namespace std;

#define SIZ 50005
int height[SIZ],temp[SIZ],pos1,pos2,flag,mid;
set<int>arr;

int BS(int,int);

int main()
{
    int m,n,ladyHeight,cnt;

    scanf("%d",&n);
    cnt=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&height[i]);

        if( arr.count(height[i])==0 )
        {
            temp[cnt++] = height[i];
            arr.insert(height[i]);
        }
    }

    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&ladyHeight);
        BS(ladyHeight,cnt);
        if(flag==1)
        {
            if(temp[mid-1] !=0 )
                printf("%d %d\n",temp[mid-1],temp[mid+1]);

            else
                 printf("X %d\n",temp[mid+1]);
        }

        else if(flag==0)
        {
            if(temp[mid+1] !=0 )
                printf("%d %d\n",temp[mid],temp[mid+1]);

            else
                printf("%d X\n",temp[mid]);
        }
    }
}

int BS(int val,int arraySize)
{
    int first,last;
    first=0;
    last=arraySize-1;
    mid = (first+last)/2;

    while (first <= last)
    {

      if (temp[mid] == val)
      {
         flag=1;
         break;
      }

      else if (temp[mid] < val)
         first = mid + 1;

      else
         last = mid - 1;

      mid = (first + last)/2;
   }

    if (first > last)
    {
        flag=0;
    }

    return mid;
}

