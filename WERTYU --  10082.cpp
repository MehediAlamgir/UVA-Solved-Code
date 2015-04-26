#include <set>
#include <stdio.h>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	//freopen("chk.txt","r",stdin);
	char ch;

	while ((scanf("%c",&ch))==1)
	{

	if(ch=='W') printf("Q");
	else if(ch=='E') printf("W");
	else if(ch=='R') printf("E");
	else if(ch=='T') printf("R");
	else if(ch=='Y') printf("T");
	else if(ch=='U') printf("Y");
	else if(ch=='I') printf("U");
	else if(ch=='O') printf("I");
	else if(ch=='P') printf("O");
	else if(ch=='[') printf("P");
	else if(ch==']') printf("[");
	else if(ch=='\\') printf("]");

	else if(ch=='S') printf("A");
	else if(ch=='D') printf("S");
	else if(ch=='F') printf("D");
	else if(ch=='G') printf("F");
	else if(ch=='H') printf("G");
	else if(ch=='J') printf("H");
	else if(ch=='K') printf("J");
	else if(ch=='L') printf("K");
	else if(ch==';') printf("L");

	else if (ch=='\'') printf(";");
	else if(ch=='X') printf("Z");
	else if(ch=='C') printf("X");
	else if(ch=='V') printf("C");
	else if(ch=='B') printf("V");
	else if(ch=='N') printf("B");
	else if(ch=='M') printf("N");
	else if(ch==',') printf("M");
	else if(ch=='.') printf(",");
	else if(ch=='/') printf(".");
	else if(ch=='1') printf("`");
	else if (ch==' ') printf(" ");


	else if(ch=='2') printf("1");
	else if(ch=='3') printf("2");
	else if(ch=='4') printf("3");
	else if(ch=='5') printf("4");
	else if(ch=='6') printf("5");
	else if(ch=='7') printf("6");
	else if(ch=='8') printf("7");
	else if(ch=='9') printf("8");
		else if(ch=='0') printf("9");

	else if(ch=='-') printf("0");
	else if(ch=='=') printf("-");

	else printf("%c",ch);
	}


	return 0;

}
