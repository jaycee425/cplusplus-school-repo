/*
		autore: Julian Bandril
		data: 25/09/2019
		oggetto: stabilire se un numero fornito
				 in ingresso è pari o dispari
		luogo: scuola
		versione 1.0.0
*/


#include<stdio.h>
 int main(){
 	//dichiarazione variabili
 		int num;
 		int quoto,resto;
 		
 	 
 	 	printf("inserisci un numero intero\n");
 	 	scanf("%d",&num);
 	 
	  //calcoli
	    quoto=num/2;
	    resto=num-quoto*2;
	    
	    if(resto==0){
	    	printf("il numero e' pari");	
		}else{
			printf("il numero e' dispari");			
		}
	  
 	 
 }
