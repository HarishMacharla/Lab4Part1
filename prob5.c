#include<stdio.h>

int main(void)
{
    int input,remainder;

    scanf("%d",&input);

    do{
        remainder=input%10;
        printf("%d",remainder);
        input/=10;
    }while(input!=0);

    printf("\n\n");

    return 0;
}