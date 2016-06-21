#include <stdio.h>
main()
{	
	int id = 0;
	int d;
	char day[48]={};
	int i, c = 0, g = 0, zi = 0, zo = 0;
	
	FILE *fp = fopen("chul.txt", "r");
	
	fscanf(fp, "%d ", &id);
	for(i=0;i<48;i++)
		fscanf(fp, "%c", &day[i]);
	
	for(i=0; i < 48; i ++){
		if(day[i]=='0')
			g ++;
		else if(day[i]=='1')
			c ++;
		else if(day[i]=='2')
			zi ++;
		else if(day[i]=='3')
			zo ++;
		else
			;
	}
	
	printf("%d", id);
	printf("\n");
	printf("전체시수 48		출석 %d 	결석 %d 	지각 %d 	조퇴 %d", c, g, zi, zo);
	if(c >= 32)
		printf("\n전체 시수의 3분의 2 이상 출석 하였으므로 정상적인 평점을 받을 수 있습니다.");
	else
		printf("\n전체 시수의 3분의 2 이상 출석 하지 못하였으므로 F입니다.");
	
		
	fclose(fp);
}


