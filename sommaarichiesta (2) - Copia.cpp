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
	float somma=0; //somma inizializzata a 0
	char opt; //richiesta utente se continuare a sommare
	int nInseriti=0;
	int resto,quoto;
	float countp=0;      // contatori positivi
	float countn=0;      // contatori negativi
	int countpa=0;     // contatori pari
	int countdi=0;     // contatori dispari
	
	//ciclo
	
	do{	
	printf("\ninserisci un numero: ");
	scanf("%f" ,&tmp);
	quoto=tmp/2;
	resto=tmp-quoto*2;
	
	if(resto==0){
		countpa++;
	}else{
		countdi++;
	}
	if(tmp<0){
		countn++;
	}else{
		countp++;
	}
	
	nInseriti++;
	somma=somma+tmp;
	printf("\nvuoi continuare? y=si n=no: ");
	scanf(" %c",&opt);
			
	}while(opt=='y');
	
		printf("la somma dei numeri inseriti:%f",somma);
		printf("\nhai inserito %d numeri" , nInseriti);
		printf("\nnumeri positivi: %f" ,countp);
		printf("\nnumeri negativi: %f" ,countn);
		printf("\nnumeri pari: %d", countpa);
		printf("\nnumeri dispari: %d", countdi);
}
