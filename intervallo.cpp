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
 		float E1,E2; //primo e secondo estremo dell'intervallo
 		float num; // numero reale
 		
 		printf("inserisci il primo estremo\n");
 		scanf("%f",&E1);
 	 	printf("inserisci il secondo estremo\n");
 	 	scanf("%f",&E2);
 	 	printf("inserisci numero reale\n");
 	 	scanf("%f",&num);
 	 	
 	 	
	  //calcoli
	    
	    
	    if(num>=E1){
	    	if(num<=E2){
	    		printf("il numero appartiene all'intervallo");	    		
			}else{
				printf("il numero non appartiene all'intervallo");					
			}
	    
	    	
			}else{
				printf("il numero non appartiene all'intervallo");	
								
		}
	  
 }
