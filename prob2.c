#include<stdio.h>
int main()
{
    int gcd,m,n;
    printf("enter two integers:\n");
    scanf("%d",&m);
    scanf("%d",&n);

    for(int i=1;i<=m && i<=n;++i){
        if(m%i==0 && n%i==0)
            gcd=i;
    }
    printf("\n");
    printf("%d\n",gcd);

    return 0;
}