/*
		oggetto:dato giorno mese dell'anno in corso dire quanti giorni sono passati
		dall'inizio dell'anno
		nome:Julian Bandril
*/
#include<stdio.h>

int main(){
	//dichiarazione variabile
	int mese;
	int Giorno;
	int giorniPassati=0;
	int giorniPassati2=0;
	int Giorno2;
	int intervalloGiorni;
	int mese2;
	
	do{
		printf("non fare lo scemo\n");
		printf("inserisci il giorno:");
		scanf("%d",&Giorno);
		printf("inserisci il mese:");
		scanf("%d",&mese);
	}while(Giorno>=31 or mese>=12);
	
	
	if(mese==1){
		giorniPassati=Giorno;	
	}
	if(mese==2){
		giorniPassati=Giorno+31;
	}
	if(mese==3){
		giorniPassati=Giorno+31+28;
	}
	if(mese==4){
		giorniPassati=Giorno+31+28+31;
	}
	if(mese==5){
		giorniPassati=Giorno+31+28+31+30;
	}
	if(mese==6){
		giorniPassati=Giorno+31+28+31+30+31;
	}
	if(mese==7){
		giorniPassati=Giorno+31+28+31+30+31+30;
	}
	if(mese==8){
		giorniPassati=Giorno+31+28+31+30+31+30+31;
	}
	if(mese==9){
		giorniPassati=Giorno+31+28+31+30+31+30+31+31;
	}
	if(mese==10){
		giorniPassati=Giorno+31+28+31+30+31+30+31+31+30;
	}
	if(mese==11){
		giorniPassati=Giorno+31+28+31+30+31+30+31+31+30+31;
	}
	if(mese==12){
		giorniPassati=Giorno+31+28+31+30+31+30+31+31+30+31+30;
	}
	
	printf("sono passati %d giorni dall'inizio dell'anno\n",giorniPassati);
	
	do{
		printf("non fare lo scemo\n");
		printf("inserisci il giorno:");
		scanf("%d",&Giorno2);
		printf("inserisci il mese:");
		scanf("%d",&mese2);
	}while(Giorno2>=31 or mese2>=12);
	
	
	if(mese2==1){
		giorniPassati2=Giorno2;	
	}
	if(mese2==2){
		giorniPassati2=Giorno2+31;
	}
	if(mese2==3){
		giorniPassati2=Giorno2+31+28;
	}
	if(mese2==4){
		giorniPassati2=Giorno2+31+28+31;
	}
	if(mese2==5){
		giorniPassati2=Giorno2+31+28+31+30;
	}
	if(mese2==6){
		giorniPassati2=Giorno2+31+28+31+30+31;
	}
	if(mese==7){
		giorniPassati2=Giorno2+31+28+31+30+31+30;
	}
	if(mese2==8){
		giorniPassati2=Giorno2+31+28+31+30+31+30+31;
	}
	if(mese2==9){
		giorniPassati2=Giorno2+31+28+31+30+31+30+31+31;
	}
	if(mese2==10){
		giorniPassati2=Giorno2+31+28+31+30+31+30+31+31+30;
	}
	if(mese2==11){
		giorniPassati2=Giorno2+31+28+31+30+31+30+31+31+30+31;
	}
	if(mese2==12){
		giorniPassati2=Giorno2+31+28+31+30+31+30+31+31+30+31+30;
	}
	
	printf("sono passati %d giorni dall'inizio dell'anno\n",giorniPassati2);
	//permette di sapere se la prima data è prima o dopo alla seconda data
	if(giorniPassati>giorniPassati2){
		intervalloGiorni=giorniPassati-giorniPassati2;
	}else{
		intervalloGiorni=giorniPassati2-giorniPassati;
	}
	
	printf("giorni passati tra le due date: %d",intervalloGiorni);
}
