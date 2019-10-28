#include<stdio.h>

int main(){
	int bin[8];
	int i;
	int n=8;
	
	for(i=0;i<n;i=i+1){
		do{
			printf("inserisci il valore %d",i);
			scanf("%d",&bin[i]);
		}while(bin[i]!=0 || bin[i]!=1);				
	}
	for(i=0;i<n;i=i+1){
			printf("numero binario: %d",bin[i]);
	}
		
}
