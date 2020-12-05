// #include <stdio.h>

// int main()
// {
//     int n,i=1, fact = 1;
//     float x, sum = 1.00,E;
//     scanf("%d", &n);
//     scanf("%f", &E);

//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//         x = (1.0 / (fact));
//         if(x<E)
//             break;
//         sum = sum + x;
//     }
//     printf("the value of e :%.4f\n", sum);
// }
//oj
#include<stdio.h>

int main(void){  
  
   float e=1.0f,n; 
   int i=1,fact=1;
 
   scanf("%f",&n);    

   while(n!=0) {     
       fact=fact*i;   
       if(1.0f/fact<n && n<e) {         
            break;      
       }
       e=e+(1.0f/fact);        
       i++; 
   }
   if(n!=1){ 
      printf("%f",e);} 
   else    {  
      printf("%.6f",1.0f);  
  } 
  return 0; 
}