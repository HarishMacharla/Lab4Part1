#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n>=0 || n<1e6){
    for(int i=2 ;i*i<=n;i+=2)
        printf("%d\n",i*i);
    }
    else
    {
        printf("------\n");
    }
    return 0;
}