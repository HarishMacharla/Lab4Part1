// // #include <stdio.h>
// // int main()
// // {
// //     float num,max=0;
// //     printf("enter a number:");
// //     scanf("%f",&num);

// //     while(num!=0 && num>0){
// //         if(num>max){
// //             max=num;
// //         printf("enter a number:");
// //         scanf("%f",&num);
// //         }
// //     }

// //     printf("the largest number entered was:%.2f\n",max);

// //     return 0;
// // }
// //

// // using do statement

// // #include <stdio.h>
// // int main()
// // {
// //     float num,max=0.0f;
// //     do{
// //         scanf("%f",&num);
// //         if(num>max)
// //             max=num;
// //     }while(num!=0 && num>0);
// //     printf("%.2f\n",max);

// //     return 0;
// // }
// #include <stdio.h>

// int main(void)
// {
//     float number, largest = 0.0f;

//     do {
//         scanf("%f", &number);
//         if (number > largest)
//             largest = number;
//     } while (number > 0.0f);

//     printf(" %.2f\n", largest);

//     return 0;
// }

// OJ
#include <stdio.h>

int main(void)
{
    float max = 0.0f;
    float num;

    do {
       
        scanf("%f", &num);

        if (num > max)
            max = num;   
    } while (num > 0);

    printf("%f\n", max);

    return 0;
}
