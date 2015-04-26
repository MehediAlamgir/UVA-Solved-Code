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
#define MAX 105

/*====================================== CONSTANT End===================================================*/

//char A[MAX],B[MAX];
int lenA,lenB;
int dp[MAX][MAX];
bool visited[MAX][MAX];
string A,B;

int calcLCS(int i, int j)
{
    if(A[i]=='\0' || B[j]=='\0')
        return 0;

    if(visited[i][j])
        return dp[i][j];

    int ans=0;

    if(A[i]==B[j])
        ans = 1+calcLCS(i+1,j+1);
    else
    {
        int val1=calcLCS(i+1,j);
        int val2=calcLCS(i,j+1);
        ans=max(val1,val2);

    }
    visited[i][j]=1;
    dp[i][j]=ans;
    return dp[i][j];
}



int main()
{
    int res,cnt=0;

    while(getline(cin,A) )
    {
          memset(visited,0,sizeof visited);

        if(A=="#")
            break;

        getline(cin,B);

        res = calcLCS(0,0);
        printf("Case #%d: you can visit at most %d cities.\n",++cnt,res);

    }

    return 0;
}
