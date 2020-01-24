#include<stdio.h>

int giorniPassati(int gg,int mm){	//prima data:giorni passati dall'inizio dell'anno
	int giorniPassati=0;
	
	if(mm>=1){
		giorniPassati=gg;
	}
	if(mm>=2){
		giorniPassati=giorniPassati+31;
	}
	if(mm>=3){
			giorniPassati=giorniPassati+28;
	}
	if(mm>=4){
		giorniPassati=giorniPassati+31;
	}
	if(mm>=5){
		giorniPassati=giorniPassati+30;
	}
	if(mm>=6){
		giorniPassati=giorniPassati+31;
	}
	if(mm>=7){
		giorniPassati=giorniPassati+30;
	}
	if(mm>=8){
		giorniPassati=giorniPassati+31;
	}
	if(mm>=9){
		giorniPassati=giorniPassati+31;
	}
	if(mm>=10){
		giorniPassati=giorniPassati+30;
	}
	if(mm>=11){
		giorniPassati=giorniPassati+31;
	}
	
	return giorniPassati;
}

int giorniPassati2(int gg2,int mm2){

	int giorniPassati2=0;
		
	if(mm2>=1){
		giorniPassati2=gg2;
	}
	if(mm2>=2){
		giorniPassati2=giorniPassati2+31;
	}
	if(mm2>=3){
		giorniPassati2=giorniPassati2+28;
	}
	if(mm2>=4){
		giorniPassati2=giorniPassati2+31;
	}
	if(mm2>=5){
		giorniPassati2=giorniPassati2+30;
	}
	if(mm2>=6){
		giorniPassati2=giorniPassati2+31;
	}
	if(mm2>=7){
		giorniPassati2=giorniPassati2+30;
	}
	if(mm2>=8){
		giorniPassati2=giorniPassati2+31;
	}
	if(mm2>=9){
		giorniPassati2=giorniPassati2+31;
	}
	if(mm2>=10){
		giorniPassati2=giorniPassati2+30;
	}
	if(mm2>=11){
		giorniPassati2=giorniPassati2+31;
	}
	
	return giorniPassati2;
}

int intervallo(int gg ,int mm,int gg2,int mm2){
	int intervalloGiorni;
	
	if(giorniPassati(gg,mm)>giorniPassati2(gg2,mm2)){
		intervalloGiorni=giorniPassati(gg,mm)-giorniPassati2(gg2,mm2);
	}else{
		intervalloGiorni=giorniPassati2(gg2,mm2)-giorniPassati(gg,mm);
	}
	
	return intervalloGiorni;
}

int main(){
	int mese;
	int giorno;
	int giorno2;
	int intervalloGiorni;
	int mese2;
	int anno;
	
	printf("inserisci la prima data:\n");
	printf("giorno: ");
	scanf("%d",&giorno);
	printf("mese: ");
	scanf("%d",&mese);
	printf("inserisci la seconda data:\n");
	printf("giorno: ");
	scanf("%d",&giorno2);
	printf("mese: ");
	scanf("%d",&mese2);
	printf("anno delle date:");
	scanf("%d",&anno);
	
	intervalloGiorni=intervallo(giorno,mese,giorno2,mese2);
	
	printf("giorni passati tra le due date: %d",intervalloGiorni);
}
