/* autore:Julian Bandril
	oggetto: scrivere un programma
			che sommi i numeri inseriti
			dall'utente.
			ad ogni inserimento il programma
			chiederà se continuare o no
*/

#include<stdio.h>
int main(){
	//dichiarazione variabili
	float tmp; // numero da sommare
	float Somma=0; //somma inizializzata a 0
	char opt; //richiesta utente se continuare a sommare
	
	//ciclo
	
	do{
		//caricamento variabile
		printf("inserisci l'addendo che vuoi sommare:\n");
		scanf("%f",&tmp);
		// calcolo
		Somma=Somma+tmp;
		printf("\nvuoi continuare a sommare? y/n ");
		scanf(" %c",&opt);		
	}while(opt=='y');
	printf("la somma dei numeri inseriti:%f",Somma);
	scanf("%f",&Somma);		
}
