/*
		autore: Julian Bandril
		data: 25/09/2019
		oggetto: programma che 
				 
		luogo: casa
		versione 1.0.0
*/


#include<stdio.h>
 int main(){
 	//dichiarazione variabili
 		int spesa;// spesa
 		int puntiI;//punti iniziali che hai già ottenuto
 		int punti=2;//punti che ottieni ogni 15 euro
 		int puntispesa;// punti che hai guadagnato dalla spesa
 		int soglia1=100,soglia2=200,soglia3=250;// soglia dei punti per vincere i premi  
 		int spesamin=30; // spesa necessaria per ottenere i punti
 		int spesabase=15;
 		int puntitot;
 		
 		
 	 
 	 	printf("inserisci spesa\n");
 	 	scanf("%d",&spesa);
 	 	printf("inserisci i punti già ottenuti\n");
 	 	scanf("%d",&puntiI);
 	 	
	  //calcoli
	    
	    
	    if(spesa>=spesamin){
	    	puntispesa=(spesa/spesabase)*punti;
	    	puntitot=puntiI+puntispesa;					
		}
		if(puntitot>=soglia3){
			printf("vinci il premio della terza categoria");			
		}else{
			if(puntitot>=soglia2){
				printf("vinci il premio della seconda categoria");
			}else{
				if(puntitot>=soglia1){
					printf("vinci il premio della prima categoria");
				}else{
					printf("nessun premio");
				}
			}
		}
								
		
	  
 }
