/*
		autore: Julian Bandril
		data: 25/09/2019
		oggetto: 
		luogo: scuola
		versione 1.0.0
*/


#include<stdio.h>
 int main(){
 	//dichiarazione variabili
 		float a,b;
 		float x;
 		
 		
 	 
 	 	printf("inserisci a\n");
 	 	scanf("%d",&a);
 	 	printf("inserisci b\n");
 	 	scanf("%d",&b);
 	 
	  //calcoli
	    
	    
	    if(a==0){
	    	if(b==0){
	    		printf("l'equazione e'indeterminata");
	    		
			}else{
				printf("l'equazione e'impossibile");
			}
			
				
		}else{
			x=-b/a;
			printf("x e' %f",x);
					
		}
	  
 	 
 }
