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
	
	/*¸ö¹«°Ô Æò±Õ ±¸ÇÏ±â*/ 
	printf("\nÀüÃ¼ ´ë»óÀÚ ¸ö¹«°Ô, Å° Æò±ÕÀÔ´Ï´Ù.");
	printf("\n	¸ö¹«°Ô Æò±Õ : ");
	for(i = 0; i < 20; i++){
		sum += m[i].weight;
	}
	stdw = sum/20;
	printf("%.2fkg", stdw);
	
	/*Å° Æò±Õ ±¸ÇÏ±â*/
	sum = 0;
	printf("\n	Å° Æò±Õ : ");
	for(i = 0; i < 20; i++){
		sum += m[i].hight;
	} 
	stdh = sum/20;
	printf("%.2fcm", stdh);
	
	/*¿¬·É ³ª´©±â*/
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
	printf("\n\n¿¬·Éº° ¸ö¹«°Ô, Å° Æò±ÕÀÔ´Ï´Ù.\n");

//	for(j = 0; j < 20; j++)
//		printf("\n%d, %d\n", sumw[j], count[j]);
	
	for(j = 0; j < 20; j++){
		if(count[j] == 0)
			printf("%5d´ë(ÃÑ %d¸í) ¸ö¹«°Ô, Å° Æò±Õ : ÇØ´ç¾øÀ½\n", j*10, count[j]);
		else 
			printf("%5d´ë(ÃÑ %d¸í) ¸ö¹«°Ô, Å° Æò±Õ : %dkg, %dcm\n", j*10,count[j], sumw[j]/count[j], sumh[j]/count[j]);
	}

}
