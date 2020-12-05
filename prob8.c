#include <stdio.h>

int main(void)
{
    int days, start_day, i, j;

    scanf("%d", &days);
    scanf("%d", &start_day);
    printf("\n");

    
    for (i = 1; i < start_day; i++) {
        printf("   ");
    }
 
    for (j = 1; j <= days; i++, j++) {
        printf("%3d", j);
        if (i % 7 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}