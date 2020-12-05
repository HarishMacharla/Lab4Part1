// #include <stdio.h>
// int main()
// {
//     int mm1,dd1,yy1,mm2,dd2,yy2;

    
//     scanf("%d /%d /%d",&mm1,&dd1,&yy1);

//     while(1){
//         scanf("%d /%d /%d",&mm2,&dd2,&yy2);

//         if(dd2==0 &&yy2==0 && mm2==0)
//             break;
//         if((yy2<yy1) ||(yy1 == yy2 && mm2<mm1) ||(yy1 ==yy2 && mm1==mm2 && dd2<dd1)){

//             dd1=dd2;
//             mm1=mm2;
//             yy1=yy2;
//         }
//     }
//     printf("%d/%d/%.2d is the ealiest date.\n",mm1,dd1,yy1);
//     return 0;
// }
//oj

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int day, month, year, earliest_day, earliest_month, earliest_year;

	//printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &earliest_month, &earliest_day, &earliest_year);

	while(true) {
	//	printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month, &day, &year);

		if(month == 0 && day == 0 && year == 0)
			break;

		if(earliest_year > year) {
			earliest_year = year;
			earliest_month = month;
			earliest_day = day;
		}
	
		if(earliest_year == year) {
			if(earliest_month > month) {
				earliest_month = month;
				earliest_day = day;
			}
			else if(earliest_month == month && earliest_day > day)
				earliest_day = day;
		}
	}

	printf("\n%d/%d/%.2d is the earliest date", earliest_month, earliest_day, earliest_year);

	return 0;
}