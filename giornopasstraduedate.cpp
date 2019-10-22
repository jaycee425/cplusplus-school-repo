/*
		oggetto:
		Inserita la prima data il programma ritorna i giorni passati dall'inizio dell'anno. 
		Inserita la seconda data il programma ritorna i giorni passati dall'inizio dell'anno e la differenza in giorni tra la prima e la seconda data.
		dall'inizio dell'anno
		nome:Julian Bandril
*/
#include<stdio.h>

int main(){
	//dichiarazione variabile
	int mese;
	int giorno;
	int giorniPassati=0;
	int giorniPassati2=0;
	int giorno2;
	int intervalloGiorni;
	int mese2;
	
	printf("Inserita la prima data il programma ritorna i giorni passati dall'inizio dell'anno.\n");
	printf("Inserita la seconda data il programma ritorna i giorni passati dall'inizio dell'anno e la differenza in giorni tra la prima e la seconda data.\n\n");
	
	do{
		printf("Inserimento prima data: \n");
		printf("inserisci il giorno:");
		scanf("%d",&giorno);
		printf("inserisci il mese:");
		scanf("%d",&mese);
	}while(giorno>=31 || mese>=12);
	
	do{
		printf("Inserimento seconda data: \n");
		printf("inserisci il giorno:");
		scanf("%d",&giorno2);
		printf("inserisci il mese:");
		scanf("%d",&mese2);
	}while(giorno2>=31 || mese2>=12);

	if(mese>=1){
		giorniPassati=giorno;	
	}
	if(mese>=2){
		giorniPassati=giorniPassati+31;
	}
	if(mese>=3){
		giorniPassati=giorniPassati+28;
	}
	if(mese>=4){
		giorniPassati=giorniPassati+31;
	}
	if(mese==5){
		giorniPassati=giorniPassati+30;
	}
	if(mese==6){
		giorniPassati=giorno+31+28+31+30+31;
	}
	if(mese==7){
		giorniPassati=giorno+31+28+31+30+31+30;
	}
	if(mese==8){
		giorniPassati=giorno+31+28+31+30+31+30+31;
	}
	if(mese==9){
		giorniPassati=giorno+31+28+31+30+31+30+31+31;
	}
	if(mese==10){
		giorniPassati=giorno+31+28+31+30+31+30+31+31+30;
	}
	if(mese==11){
		giorniPassati=giorno+31+28+31+30+31+30+31+31+30+31;
	}
	if(mese==12){
		giorniPassati=giorno+31+28+31+30+31+30+31+31+30+31+30;
	}
	
	printf("sono passati %d giorni dall'inizio dell'anno\n",giorniPassati);
	
	if(mese2==1){
		giorniPassati2=giorno2;	
	}
	if(mese2==2){
		giorniPassati2=giorno2+31;
	}
	if(mese2==3){
		giorniPassati2=giorno2+31+28;
	}
	if(mese2==4){
		giorniPassati2=giorno2+31+28+31;
	}
	if(mese2==5){
		giorniPassati2=giorno2+31+28+31+30;
	}
	if(mese2==6){
		giorniPassati2=giorno2+31+28+31+30+31;
	}
	if(mese==7){
		giorniPassati2=giorno2+31+28+31+30+31+30;
	}
	if(mese2==8){
		giorniPassati2=giorno2+31+28+31+30+31+30+31;
	}
	if(mese2==9){
		giorniPassati2=giorno2+31+28+31+30+31+30+31+31;
	}
	if(mese2==10){
		giorniPassati2=giorno2+31+28+31+30+31+30+31+31+30;
	}
	if(mese2==11){
		giorniPassati2=giorno2+31+28+31+30+31+30+31+31+30+31;
	}
	if(mese2==12){
		giorniPassati2=giorno2+(31*6)+(30*4)+28; 
	}
	
	printf("sono passati %d giorni dall'inizio dell'anno\n",giorniPassati2);
	//permette di sapere se la prima data � prima o dopo alla seconda data
	if(giorniPassati>giorniPassati2){
		intervalloGiorni=giorniPassati-giorniPassati2;
	}else{
		intervalloGiorni=giorniPassati2-giorniPassati;
	}
	
	printf("giorni passati tra le due date: %d",intervalloGiorni);
}
