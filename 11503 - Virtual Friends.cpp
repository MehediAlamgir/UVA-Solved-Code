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

#define INF (1<<30) //infinity value
#define EPS 1e-9
#define MOD 10007
#define SIZ 5005

/*====================================== CONSTANT End===================================================*/

map<string,string> parent;
map<string,int> msi;
int mx;

void MakeSet(string str)
{
    parent[str] = str;
}

string find_representative(string s)
{
    if(parent[s]==s)
        return s;

    else
    {
        return parent[s] = find_representative(parent[s]);
    }
}

void Union(string a, string b)
{
    string u = find_representative(a);
    string v = find_representative(b);

    if(u!=v)
    {
        parent[u] = v;
        msi[v]= msi[v]+ msi[u];
        //mx=max(msi[v],mx);
    }

    cout<<msi[v]<<endl;

}

int main()
{

    input;
    output;

    int f,tc;
    string f1,f2;

    scanf("%d",&tc);

    while(tc--)
    {

        mx=1;
        parent.clear();
        msi.clear();

        scanf("%d",&f);

        for(int i=0;i<f;i++)
        {
            cin>>f1>>f2;
            if(msi.count(f1)==0)
            {
                msi[f1]=1;
                MakeSet(f1);
            }

            if(msi.count(f2)==0)
            {
                msi[f2]=1;
                MakeSet(f2);
            }

            Union(f1,f2);
        }

    }

    return 0;
}
