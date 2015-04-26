#include<stdio.h>
int main(){
int a,b,i,s,tc,cn=1;
scanf("%d",&tc);

while(cn<=tc){
s=0;
scanf("%d %d",&a,&b);
if((a%2)==0){


i=a+1;}
else
i=a;
while(i<=b){
s=s+i;
i=i+2;
}
printf("Case %d: %d\n",cn,s);
cn++;

}

return 0;
}
