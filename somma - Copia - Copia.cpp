/*
	autore:Bandril Julian
	data: 23-09-2019
	luogo: Lab53bis
	oggetto: programma che 
			 che fanno una somma di numeri interi
	versione 1.0.0
*/
#include<stdio.h>
int main(){
	// dichiarazione variabile
	int num1, num2; // addendi
	int somma; // risultato della addizione
	int differenza; // risultato della sottrazione
	int moltiplicazione; // risultato della moltiplicazione
	// calcolo
	num1=3;
	num2=9;
	
	somma=num1+num2;
	differenza=num1-num2;
	moltiplicazione=num1*num2;
	
	printf("La somma vale: %d",somma);	
	printf("\nLa differenza vale: %d",differenza);
	printf("\nLa moltiplicazione vale: %d",moltiplicazione);
	
	printf("\n%d + %d = %d",num1,num2,somma);
	printf("\n%d - %d = %d",num1,num2,differenza);
	printf("\n%d * %d = %d",num1,num2,moltiplicazione);
	return 0;	
}

