#include<stdio.h>

int main(){
	int Mese;
	int I=0;
	
	do{
		if(I==0){
			printf("inserisci il mese ");
			scanf("%d",&Mese);
		}else{
			printf("reinserisci il mese ");
			scanf("%d",&Mese);
		}
		I=I+1;
	}while(Mese<1 || Mese>12);
}
