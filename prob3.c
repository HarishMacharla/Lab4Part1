#include <stdio.h>
int main()
{
    int x,m,n;
    printf("enter a fraction:");
    scanf("%d/%d",&m,&n);

    for(int i=1;i<=m && i<=n;++i){
        if(m%i==0 && n%i==0)
            x=i;
    }
    printf("in lowest terms:%d/%d\n",(m/x),(n/x));
    return 0;
}