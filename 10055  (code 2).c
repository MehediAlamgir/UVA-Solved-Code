#include <stdio.h>
int main () {
//freopen ("in.txt","r",stdin);
long long has,op,dif;

while(scanf("%lld %lld",&has,&op)==2) {

if (has<op) {
dif=(op-has);
printf("%lld\n",dif);
}

else {
dif=(has-op);
printf("%lld\n",dif);
}

}

return 0;

}
