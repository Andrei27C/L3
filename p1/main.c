#include <stdio.h>

int xx=0,n,i,x,xn=0;
int main() {
    scanf("%d",&n);
    for(i=1;i<=n*2-1;i++)
    {
        scanf("%d",&x);
        xx=xx^x;
    }
    for(i=1;i<=n;i++)
        xn=xn^i;
    for(i=1;i<=n;i++)
        xn=xn^i;
    printf("%d",xn^xx);
    return 0;
}