/*
	oggetto:combinazione di 5 lettere 
			a tre gruppi

*/

#include<stdio.h>
#define n 5

int main(){
	char v[n]={'A','B','C','D','E'};
	int i,j,k; // contatori
	
	for(i=0;i<n-2;i++){
		for(j=i+1;j<n-1;j++){
			for(k=j+1;k<n;k++){
				printf("%c %c %c\t",v[i],v[j],v[k]);
			}
		}
	}
}
