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
	printf("��ü�ü� 48		�⼮ %d 	�Ἦ %d 	���� %d 	���� %d", c, g, zi, zo);
	if(c >= 32)
		printf("\n��ü �ü��� 3���� 2 �̻� �⼮ �Ͽ����Ƿ� �������� ������ ���� �� �ֽ��ϴ�.");
	else
		printf("\n��ü �ü��� 3���� 2 �̻� �⼮ ���� ���Ͽ����Ƿ� F�Դϴ�.");
	
		
	fclose(fp);
}


