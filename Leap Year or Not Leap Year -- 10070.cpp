#include<stdio.h>
#include<iostream>
#include<cstring>
#define siz 1000000
using namespace std;

long long i,j,l,rs1,rs2,rs3,rs4,rs5;
char a[siz];
bool flag1,flag2,flag3;


int main()
{
    int f = 0;
    while((scanf("%s",&a))==1)
    {
        if(f==0)f=1;
        else printf("\n");

        l=strlen(a);
        rs1=0;
        rs2=0;
        rs3=0;
        rs4=0;
        rs5=0;
        for(i=0;i<l;i++)
        {
            rs1=(rs1*10 +a[i]-48)%4;
            rs2=(rs2*10 +a[i]-48)%100;
            rs3=(rs3*10 +a[i]-48)%400;
            rs4=(rs4*10 +a[i]-48)%15;
            rs5=(rs5*10 +a[i]-48)%55;
        }
        flag2=false;
        flag3=false;
        flag1=false;


        if(rs1==0 && rs2 != 0 || rs3==0)
        {
            flag1=true;
        }


           if(rs4==0)
        {
            flag2=true;
        }

         if(rs5==0 && flag1==true)
        {
            flag3=true;
        }

         if(flag1==true)
        {
            printf("This is leap year.\n");
        }

        if(flag2==true)
        {
            printf("This is huluculu festival year.\n");
        }

        if(flag3==true)
        {
         printf("This is bulukulu festival year.\n");
        }


        if(flag1==false && flag2==false && flag3==false)
        {
         printf("This is an ordinary year.\n");
        }

    }
}

