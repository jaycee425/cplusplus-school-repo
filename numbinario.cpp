#include<stdio.h>

int main(){
	int bin[8];
	int i;
	int n=8;
	
	for(i=0;i<n;i=i+1){
		do{
			printf("inserisci il tuo nunero binario");
			scanf("%d",&bin[i]);
		}while(bin[i]!=0 && bin[i]!=1);				
	}
	
	printf("il numero binario:\n");
	
	for(i=0;i<n;i=i+1){
			printf("%d",bin[i]);
	}
		
}
