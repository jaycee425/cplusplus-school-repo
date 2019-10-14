#include<stdio.h>

int main(){
	//dichiarazione variabili
	int dividendo;
	int divisore;
	int risultato=0; //inizializzazione a 0
	int trasformaRisultato=0; // 0= falso 1= vero
	
	printf("inserisci il dividendo\n");
	scanf("%d",&dividendo);
	
	//divisore non può essere uguale a 0
	do{
		printf("inserisci il divisore\n");
		scanf("%d",&divisore);
	}while(divisore==0);
	// se dividendo=0 è inutile fare calcoli
	if(dividendo==0){
		printf("il quoziente e': 0 ");
		printf("il resto e': 0");		
	}else{
		// se dividendo e divisore sono entrambi negativi trasforma in positivo, <trasformaRisultato> resta a 0
		if(dividendo<0 && divisore<0){
			dividendo=dividendo*-1;
			divisore=divisore*-1;
		}
		// se uno dei due divisore o dividendo e' negativo cambia segno, <trasformaRisultato> va a 1 perchè il risultato deve cambiare il segno	
	    if(dividendo<0){
	    	dividendo=dividendo*-1;
	    	trasformaRisultato=1;
		}
		if(divisore<0){
	    	divisore=divisore*-1;
	    	trasformaRisultato=1;
		}
		
		do{	
			dividendo=dividendo-divisore;
			risultato++;			
		}while(dividendo>=divisore);
		
		if(trasformaRisultato==1){
			risultato=risultato*-1;
		}
		
		printf("il quoziente e': %d\n",risultato);
		printf("il resto e': %d",dividendo);		
	}		
}
