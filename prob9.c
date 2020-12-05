// include<stdio.h>

// int main(void)
// {
//     double amount,interest_rate,monthly_payment,monthly_interest_rate,a=0; 
//     int no_of_payments;

//     scanf("%lf",&amount);
    
//     scanf("%lf",&interest_rate);

//     scanf("%lf",&monthly_payment);

//     scanf("%d",&no_of_payments);

//     monthly_interest_rate=interest_rate/100/12;
    
 
//     for(int i =1;i<=no_of_payments;i++){
//         amount = (amount - monthly_payment)+(amount*monthly_interest_rate);
//         if(amount<=0)
//             printf("%d:$%.2lf\n",i,a);
//         else
//         {
//             printf("%d:$%.2lf\n",i,amount);
//         }
        
//     }
//     return 0;
// }
    
// }
//oj

#include<stdio.h>
int main(void)
{
    double balance,interest_rate,monthly_payment,m_interest_rate,a=0;
    int number_of_payments;

    scanf("%lf",&balance);
    scanf("%lf",&monthly_payment);
    scanf("%lf",&monthly_payment);
    scanf("%d",&number_of_payments);

    printf("\n");

    m_interest_rate=interest_rate/100/12;
    
    for(int payment_num=1;payment_num<=number_of_payments;payment_num++){
        balance=balance-monthly_payment+balance*m_interest_rate;
        if(balance<=0)
            printf("%d: $%.2lf\n",payment_num,a);
        else
        {
            printf("%d:$%.2lf\n",payment_num,balance);
        }
    }
    return 0;
}