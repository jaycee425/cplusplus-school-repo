#include<stdio.h>

int main(){
	int n=11;
	int i,j;
	int mat[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat[i][j]=i*j;
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
}
