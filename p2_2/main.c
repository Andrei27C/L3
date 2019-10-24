#include <stdio.h>

int nr,i,p2=1;
int main() {
    scanf("%d",&nr);
    for(p2=1;p2<=nr;p2*=2);
    if(nr==p2/2)printf("DA");
    else printf("NU");
    return 0;
}