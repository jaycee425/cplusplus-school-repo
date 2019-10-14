#include<stdio.h>
int main(){
	//dichiarazione variabili
	int dividendo;
	int divisore;
	int quoto, resto;
	int differenza;
	int sottrazione;
	
	sottrazione=0; //inizializzazione a 0
	
	// ciclo
	
	do{
		printf("inserisci il dividendo\n");
		scanf("%d",&dividendo);
		printf("inserisci il divisore\n");
		scanf("%d",&divisore);
		//calcoli
		differenza=dividendo-divisore;
		printf("sei arrivato a: %d - %d= %d\n",dividendo,divisore,differenza);
		//ninserimenti
		sottrazione++;
			
	}while(differenza>=divisore);
	printf("il quoziente e': %d\n",sottrazione);
	printf("il resto e': %d",differenza);
	
	
}
