#include<stdio.h>

int main(){
	//dichiarazione variabile
	float primoNumero;
	float secondoNumero;
	char operatore;
	float risultato;
		
	//Caricamento variabili
	
	printf("inserisci il primo numero\n");
	scanf("%f",&primoNumero);
	printf("inserisci operando\n");
	scanf(" %c",&operatore);
	printf("inserisci il secondo numero\n");
	scanf("%f",&secondoNumero);	
	
	//calcoli	
	
	if(operatore =='+'){
		risultato=primoNumero+secondoNumero;
		printf("%f + %f= %f",primoNumero,secondoNumero,risultato);		
	}else{
		if(operatore =='-'){
			risultato=primoNumero-secondoNumero;
			printf("%f - %f= %f",primoNumero,secondoNumero,risultato);
		}else{
			if(operatore =='*'){
				risultato=primoNumero*secondoNumero;
				printf("%f * %f= %f",primoNumero,secondoNumero,risultato);
			}else{
				if(operatore =='/'){
					risultato=primoNumero/secondoNumero;
					printf("%f / %f= %f",primoNumero,secondoNumero,risultato);
				}
			}
		}
	}
}
