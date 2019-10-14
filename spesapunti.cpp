/*
		autore: Julian Bandril
		data: 25/09/2019
		oggetto: programma che 
				 
		luogo: casa
		versione 1.0.0
*/


#include<stdio.h>
 int main(){
 	//dichiarazione costanti
 		const int punti = 2;//punti che ottieni ogni <baseCalcPunti> euro
		const int baseCalcPunti = 15; //base di calcolo dei punti per ottenere punti
 		const int soglia1 = 100, soglia2 = 200, soglia3 = 250;// soglia dei punti per vincere i premi  
 		const int spesaMin = 30; // spesa minima necessaria per ottenere i punti 
	
	//dichiarazione variabili	
		int spesa;
 		int puntiIniziali;
 		int puntiOttenuti = 0;
		 int puntiTot;
 		
 	//Riempimento variabili
 	 	printf("inserisci spesa\n");
 	 	scanf("%d",&spesa);
 	 	printf("inserisci i punti gi� ottenuti\n");
 	 	scanf("%d",&puntiIniziali);
 	 	
		puntiTot = puntiIniziali;
	//calcoli
		if(spesa>=spesaMin){
	    	puntiOttenuti=(spesa/baseCalcPunti)*punti;
	    	puntiTot=puntiIniziali+puntiOttenuti;					
		}
		if(puntiTot>=soglia3){
			printf("vinci il premio della terza categoria");			
		}else{
			if(puntiTot>=soglia2){
				printf("vinci il premio della seconda categoria");
			}else{
				if(puntiTot>=soglia1){
					printf("vinci il premio della prima categoria");
				}else{
					printf("nessun premio");
				}
			}
		}
 }
