#include<stdio.h>
    int main(){
    	//dichiarazione variabili
    	
    	float let1,let2;//letture del contatore
    	float prezzo=0.8;//prezzo al metro cubo
    	float costofisso=15;//costo standard
    	float costo1;//costo senza iva
    	float costo2;//costo+iva
    	float costototale;//costo1+costo con iva
    	
    	printf("inserisci la prima lettura\n");
    	scanf("%f",&let1);
    	printf("inserisci la seconda lettura\n");
    	scanf("%f",&let2);
    	
    	//calcolo
    	
    	costo1=(let1+let2)*prezzo;
    	costo2=costo1+(costo1/100)*10;
    	costototale=costo2+costofisso;
    	
    	printf("il costo della bolletta vale %f",costototale);
    	
    	
    	
    		return 0;
	}
