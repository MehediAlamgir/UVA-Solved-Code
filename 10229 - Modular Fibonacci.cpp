#include<bits/stdc++.h>

using namespace std;

long long mod = 1;

struct matrix
{
  long long m[2][2];
};

matrix multiply(matrix a, matrix b)
{

  matrix c;
  for(int i=0;i<2;i++)
  {
      for(int j=0;j<2;j++)
      {
          c.m[i][j]=0;
          for(int k=0;k<2;k++)
          {
              c.m[i][j] += a.m[i][k] * b.m[k][j];
               c.m[i][j] %= mod;
          }
      }
  }

  return c;

}

matrix power(matrix mat, long long p)
{

    if (p == 1)
        return mat;
    if(p&1)
    {
        return multiply(mat,power(mat,p-1));
    }
    else
    {
        matrix ret = power(mat,p/2);
        return multiply(ret,ret);
    }

}

int main()
{

  long long  n, m;

 // cin >> tcase;
  while (cin >> n >>m)
  {

        for(int l=0;l<m;l++)
        {
            mod*=2;
        }


        matrix bm,dm,A,ans;

        bm.m[0][0]=1;
        bm.m[0][1]=1;
        bm.m[1][0]=1;
        bm.m[1][1]=0;


        A.m[0][0]=1;
        A.m[1][0]=0;


        if (n == 0)
        {
            printf("0\n");
        }
        else if(n == 1)
        {
            printf("1\n");
        }
        else
        {
              dm = power(bm, n - 1);
              ans = multiply(dm,A) ;

              cout<< ans.m[0][0] << endl;
        }

        mod=1;
  }
  return 0;
}
