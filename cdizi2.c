#include <stdio.h>


// satýr sütun yer deðiþtirme


int main(){
	
	int matris[4][4]={31,24,42,76,18,34,98,22,50,11,92,93,38,68,20,14};
	int i,j;
	
	for(i=0;i<4;i++){
	for(j=0;j<4;j++)
	
	printf("%d ",matris[i][j]);
	printf("\n");
	
}
	printf("\n");
	
	for( i = 0; i < 4; i++ ){
    for( j = 3; j >= 0 ; j--)
    
    printf("%d ", matris[j][i] );
    printf("\n");
}
	return 0;
}
