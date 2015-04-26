#include<bits/stdc++.h>

using namespace std;

/*======================================= Macro Start====================================================*/

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

/*======================================= Macro End====================================================*/

/*====================================== CONSTANT Start===================================================*/

#define inf (1<<30) //infinity value
#define eps 1e-9
#define mod 10007
#define siz 1005

/*====================================== CONSTANT End===================================================*/


long long phi(long long num)
{
    if(num==1)
        return 0;

    long long res=num;
    for(long long i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            while(num%i==0)
            {
                num /= i;
            }

            res -= res/i;
        }
    }
    if(num>1)
    {
         res -= res/num;
    }

    return res;
}


int main()
{
    long long n,res;
    while(~scanf("%lld",&n))
    {
        if(n==0)
            break;

        else
        {
            res = phi(n);

        }
        printf("%lld\n",res);
    }

    return 0;
}
