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

	if(ch=='e' || ch=='E') printf("q");
	else if(ch=='r' || ch=='R') printf("w");
	else if(ch=='t' || ch=='T') printf("e");
	else if(ch=='y' || ch=='Y') printf("r");
	else if(ch=='u' || ch=='U') printf("t");
	else if(ch=='i' || ch=='I') printf("y");
	else if(ch=='o' || ch=='O') printf("u");
	else if(ch=='p' || ch=='P') printf("i");
	else if(ch=='[' || ch=='{') printf("o");
	else if(ch==']'|| ch=='}') printf("p");

	else if(ch=='d' || ch=='D') printf("a");
	else if(ch=='f' || ch=='F') printf("s");
	else if(ch=='g' || ch=='G') printf("d");
	else if(ch=='h' || ch=='H') printf("f");
	else if(ch=='j' || ch=='J') printf("g");
	else if(ch=='k' || ch=='K') printf("h");
	else if(ch=='l' || ch=='L') printf("j");
	else if(ch==';') printf("k");

	else if(ch=='c' || ch=='C') printf("z");
	else if(ch=='v' || ch=='V') printf("x");
	else if(ch=='b' || ch=='B') printf("c");
	else if(ch=='n' || ch=='N') printf("v");
	else if(ch=='m' || ch=='M') printf("b");
	else if(ch==','|| ch=='<') printf("n");
	else if(ch=='.'|| ch=='>') printf("m");
	else if(ch=='/'|| ch=='?') printf(",");
	//else if(ch=='"') printf("||"); //??
	else if(ch == '\'') printf("l"); //???
	else if(ch == 's' || ch == 'S') printf("]");  //???
	else if(ch == 'a' || ch == 'A') printf("["); //????
	//else if(ch == 'z' || ch == 'Z') printf("\");
	else if(ch == 'q' || ch == 'Q') printf("{"); //??
	else if(ch == 'w' || ch == 'W') printf("}'"); //??


	else if(ch=='2') printf("`");


	else printf("%c",ch);
	}


	return 0;

}
