#include <stdio.h>
main()
{
	int day;
	int lastday[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i, j, m;
	int year;
	int month;
	int firstday;
	
	printf("1��1���� ���������ΰ���?\n");
	printf("(�Ͽ���0, ������1, ȭ����2, ������3, �����4, �ݿ���5, �����6)\n");
	scanf("\n%d", &day);//7�Է�X
	printf("�⵵�� �Է��ϼ���:"); 
	scanf("%d", &year);
	printf("\t��\t��\tȭ\t��\t��\t��\t��\t\n");

	
	for(month = 0; month < 12; month ++)
	{
		printf("\n\n\t%d��\n", month+1);
	
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
	

