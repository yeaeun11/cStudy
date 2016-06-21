#include <stdio.h>
main()
{
	int day;
	int lastday[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i, j, m;
	int year;
	int month;
	int firstday;
	
	printf("1월1일은 무슨요일인가요?\n");
	printf("(일요일0, 월요일1, 화요일2, 수요일3, 목요일4, 금요일5, 토요일6)\n");
	scanf("\n%d", &day);//7입력X
	printf("년도를 입력하세요:"); 
	scanf("%d", &year);
	printf("\t일\t월\t화\t수\t목\t금\t토\t\n");

	
	for(month = 0; month < 12; month ++)
	{
		printf("\n\n\t%d월\n", month+1);
	
		if(month == 1)
		{
			if(year % 4 == 0 || year % 100 != 0)
			{
				lastday[month] = 29;
			}
			else
			{
				lastday[month] = 28;
			}
		}
	
//
		if( month == 0)
		{
			for(j = 0;j < day;j ++)
			{
 				printf("\t");
			}
			
			for(i = 1;i <= lastday[month];i ++)
			{
				printf("\t%2d", i);
				if((i + day)%7 == 0)
				{
					printf("\n");
				}
			}
			
			
		}
		else
		{
			firstday = ((day + lastday[month]) % 7);
			  
			for(j = 0;j < firstday;j ++)
			{
 				printf("\t");
			}
		
			for(i = 1;i <= lastday[month];i ++)
			{
				printf("\t%2d", i);
				if((i + firstday) % 7 == 0)
				{
					printf("\n");
				}
			}
		}
	}
	
}
	

