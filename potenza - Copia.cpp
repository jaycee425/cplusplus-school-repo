#include<stdio.h>

int main(){
	int b; //base
	int e; //esponente
	int pot=1; //potenza
	
	printf("insert base: \n");
	scanf("%d",&b);
	printf("insert exponent:\n");
	scanf("%d",&e);
	
	while(e>0){
		pot=pot*b;
		e=e-1;
	}
	
	printf("\n%d",pot);
}
