#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("Enter the year check leap year\n");
scanf("%d",&year);
if(year%400==0)
printf("%d is a leap year\n",year);
else if(year%100==0)
printf("%d is not a leap year\n",year);
else if(year%4==0)
printf("%d is a leap year\n",year);
else
printf("%d is not a leap year\n",year);
getch();
}
