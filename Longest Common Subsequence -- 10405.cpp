/* Dynamic Programming implementation of LCS problem */
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<sstream>
#include<cctype>

#include<iostream>

using namespace std;

 char X[10001],Y[10001];
 int L[10001][10001];

//int max(int a, int b);

int lcs( char *X, char *Y, int m, int n )
{

   int i, j;

   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if(X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   return L[m][n];
}

int max(int a, int b)
{
    return (a > b)? a : b;
}



int main()
{
	//freopen("chk.txt","r",stdin);

  int m,n;

  while(gets(X))
  {
  	gets(Y);

	m =strlen(X);
	n =strlen(Y);

	if(m==0|| n==0)
	break;

	printf("%d\n", lcs( X, Y, m, n ) );

  }

  return 0;
}
