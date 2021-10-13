#include <stdio.h>
# define SAT 2
# define SUT 3
int main(){
	
	int a[SAT][SUT]={5,3,7,0,1,2};
	int b[SAT][SUT]={1,2,3,4,5,6};
	int c[SAT][SUT];
	int i,j;
	
	// A ve B matrisini toplayýp C matrisine yazan program
	puts("A matrisi:");
	
	for(i=0; i<SAT; i++){
    for(j=0; j<SUT; j++)
    printf("%4d",a[i][j]);
    printf("\n");
 }
	
	puts("B matrisi:");
	
	for(i=0; i<SAT; i++){
    for(j=0; j<SUT; j++)
    printf("%4d",b[i][j]);
    printf("\n");
}
	
	puts("C matrisi:");
	
	for(i=0; i<SAT; i++){
   for(j=0; j<SUT; j++){
   	
    c[i][j] = a[i][j] + b[i][j]; 
    printf("%4d",c[i][j]);
 }
 printf("\n");
 }
 return 0;
}

