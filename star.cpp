#include <stdio.h>

struct member{
	char name[15];
	int age;
	int hight;
	int weight;
};

main()
{
	struct member m[20];
	int i, sum = 0;
	float stdh, stdw = 0;
	
	FILE *fp;
	fp = fopen("st.txt", "r");
	
	for(i = 0; i < 20; i++)
		fscanf(fp, "%s	%d	%d	%d", &m[i].name, &m[i].age, &m[i].hight, &m[i].weight);
		
	fclose(fp);
	
	for(i = 0; i < 20; i++)
		printf("%s	%d	%d	%d\n",  m[i].name, m[i].age, m[i].hight, m[i].weight);
	
	/*������ ��� ���ϱ�*/ 
	printf("\n��ü ����� ������, Ű ����Դϴ�.");
	printf("\n	������ ��� : ");
	for(i = 0; i < 20; i++){
		sum += m[i].weight;
	}
	stdw = sum/20;
	printf("%.2fkg", stdw);
	
	/*Ű ��� ���ϱ�*/
	sum = 0;
	printf("\n	Ű ��� : ");
	for(i = 0; i < 20; i++){
		sum += m[i].hight;
	} 
	stdh = sum/20;
	printf("%.2fcm", stdh);
	
	/*���� ������*/
	int j = 0;
	int sumw[20] = {};
	int sumh[20] = {}; 
	int count[20] = {};

	for(i = 0; i < 20; i++){
		j = m[i].age/10;
		sumh[j] += m[i].hight;
		sumw[j] += m[i].weight;
		count[j] ++;
	}		 
	printf("\n\n���ɺ� ������, Ű ����Դϴ�.\n");

//	for(j = 0; j < 20; j++)
//		printf("\n%d, %d\n", sumw[j], count[j]);
	
	for(j = 0; j < 20; j++){
		if(count[j] == 0)
			printf("%5d��(�� %d��) ������, Ű ��� : �ش����\n", j*10, count[j]);
		else 
			printf("%5d��(�� %d��) ������, Ű ��� : %dkg, %dcm\n", j*10,count[j], sumw[j]/count[j], sumh[j]/count[j]);
	}

}
