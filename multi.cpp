#include <stdio.h>
main()
{
	int man=0,i,id=0;
	char day[]={};
	
	FILE *fp = fopen("chulchul.txt", "r");
	
	fscanf(fp, "%d\n", &man);
	for(i=0;i<man;i++){
		fscanf(fp, "%d ", &id);
		for(j=0;j<48;j++){
			fscanf(fp, "%c", &day[j]);
		}
	}
	
	fclose(fp);
	
	printf
	
}
