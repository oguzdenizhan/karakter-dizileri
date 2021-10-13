#include <stdio.h>

/*10 tane öðrencinin 4 dersinin vize ve final notlarýný kullanýcýdan
 alýp ortalamasýný yazan program*/
 
int main(){
	
	float s_not[10][4][2];
	int i,j,k;
	
	puts("Notlar:");
	
	for(k=0;k<10;k++){
		
		printf("%d. ogrenci\n",k+1);
		for(i=0;i<4;i++){
			
			printf("%d. ders\n",i+1);
			for(j=0;j<2;j++){
				scanf("%f",&s_not[k][i][j]);
			}
		
		s_not[k][i][2]=0.4*s_not[k][i][0] + 0.6*s_not[k][i][1];
		printf("ortalama: %.2f\n",s_not[k][i][2]);
		
		}
	}
	return 0;
}
