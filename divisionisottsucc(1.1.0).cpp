/*    
		nome:Julian Bandril
		oggetto:programma che risolve 
				la divisione con sottrazioni 
				successive
				versione:1.1.0
*/


#include<stdio.h>

int main(){
	//dichiarazione variabile
	int dividendo=0;
	int divisore;
	int risultato=1;
	//caricamento variabili
	printf("inserisci il dividendo:\n");
	scanf("%d",&dividendo);
	printf("inserisci il divisore : \n");
	scanf("%d",&divisore);
	//non funziona il programma se il divisore è =0 o contrario
	
	}
	//calcolo iniziale
	dividendo=dividendo-divisore;
	
	
	while(dividendo>=divisore){
		printf("il risultato parziale e':%d \n",dividendo);
		dividendo=dividendo-divisore;
		risultato++;		
	}
	printf("il risultato e':%d\n",risultato);
	printf("il resto e':%d\n",dividendo);
}
