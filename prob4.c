// // #include <stdio.h>
// // int main()
// // {
// //     float commision, value;
// //     printf("enter the value of trade:");
// //     scanf("%f", &value);

// //     while(value!=0){

// //         if (value>0 && value< 2500)
// //             commision = 30.00 + (0.017 * value);

// //         else if (value < 6250)
// //             commision = 56.00 + (0.0066 * value);

// //         else if (value < 20000)
// //             commision = 76.00 + (0.0034 * value);

// //         else if (value < 50000)
// //             commision = 100.00 + (0.0022 * value);

// //         else if (value < 500000)
// //             commision = 155.00 + (0.0011 * value);

// //         else
// //             commision = 255.00 + (0.0009 * value);
            
// //         if(commision<39.00)
// //             commision=39.00;
            
// //         printf("the commision is :$%.2f\n",commision);
// //         printf("enter the value of trade:");
// //         scanf("%f", &value);
// //     }
    
// //     return 0; 
// // }

// #include<stdio.h>

// int main(void)
// {
//     float commission,value;

//     printf("Enter value of trade (0 to exit): ");
//     scanf("%f", &value);

//     while (value != 0) {
//         if (value < 2500.00f)
//             commission = 30.00f + .017f * value;
//         else if (value < 6250.00f)
//             commission = 56.00f + .0066f * value;
//         else if (value < 20000.00f)
//             commission = 76.00f + .0034f * value;
//         else if (value < 50000.00f)
//             commission = 100.00f + .0022f * value;
//         else if (value < 500000.00f)
//             commission = 155.00f + .0011f * value;
//         else
//             commission = 255.00f + .0009f * value;

//         if (commission < 39.00f)
//             commission = 39.00f;

//     printf("Commission: $%.2f\n", commission);
        

//         printf("\nEnter value of trade (0 to exit): ");
//         scanf("%f", &value);
//     }
    
    
//     return 0;
// }

//0J
#include <stdio.h>

int main(void)
{
    float commission, value;

    scanf("%f", &value);

    while (value > 0){

        if (value < 2500.00f)
            commission = 30.00f + 0.017f * value;
        
        else if (value < 6250.00f)
            commission = 56.00f + 0.0066f * value;
        
        else if (value < 20000.00f)
           commission = 76.00f + 0.00034f * value;
        
        else if (value < 50000.00f)
           commission = 100.00f + 0.0022f * value;
        

        else if (value < 500000.00f)
           commission = 155.00f + 0.0011f * value;
        
        else
           commission = 255.00f + 0.0009 * value;
        

        if (commission < 39.00f)
           commission = 39.00f;
        

    printf("%.2f\n", commission);
    scanf("%f", &value);
    }
    
    return 0;

}

