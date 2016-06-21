#include <stdio.h>
main()
{
	int i, j, p, q, k, isum, max = 0;
		
	FILE *fp = fopen("matrix.txt", "r");
	
	fscanf(fp, "%d %d", &i, &j);
	int m[i][j];
	int count[j]={};
	
	p=i;
	q=j;
	for(i=0; i < p; i++){
		for(j=0; j < q; j++){
			fscanf(fp," %d", &m[i][j]);
		}
	}
	for(i=0; i < p; i++){
		for(j=0; j < q; j++){
			printf(" %d", m[i][j]);
			isum += m[i][j];
		}
		printf("	");
		for(k = 0; k < isum; k++){
			printf("*");	
		}
		isum = 0;
		printf("\n");
	}
	for(j=0; j < q; j++){
		for(i=0; i < p; i++){
			count[j] += m[i][j];
		}
	}
	max = count[0];
	for(j=0; j < q; j++){
		if(max <= count[j])
			max = count[j];
	}
//	printf("%d %d %d %d", count[0],count[1],count[2],count[3]);
	
	for(k=0; k < max; k++){
		for(j=0; j < q; j++){
			if(count[j] <= 0)
				printf("  ");
			else
				printf(" *");
			count[j] --;
		}
		printf("\n");
	}
	fclose(fp);
}

