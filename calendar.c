#include<stdio.h>
#include<stdlib.h>
// when will the first day of jan starts fxn
int get_first_weekday(int year)
{
	 int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}
 int main()
{
  system("color E6 ");    //background color
  int year,month,day,weekDay=0,startingDay;//monthDays;	
  printf("\nEnter your desire year:");
  scanf("%d",&year);
// month name,days,date
char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
 int monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};    //last days of month
//leap year
if((year%4==0 && year%100!=0)||year%400==0)

	 monthDays[1]=29;
startingDay=get_first_weekday(year);
for(month=0;month<12;month++)
{
 int DaysInMonth=monthDays[month];
	printf("\n\n------------------%s-------------",months[month]);
	printf("\n  Sun  Mon  Tue  Wed  Thrus  Fri  Sat\n");
	 for(weekDay=0;weekDay<startingDay;weekDay++)
        printf("     ");
	//date of month
	for(day=1;day<=DaysInMonth;day++)
	{
		printf("%5d",day);     //not coming according to the row
		if(++weekDay>6)       //if it reaches sat come back to sunday
		{
			printf("\n");
			weekDay=0; //so tht it can work again
		}
		startingDay=weekDay;
	}
	
}
  
}
