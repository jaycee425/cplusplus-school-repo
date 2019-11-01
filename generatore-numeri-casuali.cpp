#include<stdio.h>
#include<stdlib.h>

int main(){
	int num[20];
	float n=20;
	int i;
	int somma=0;
	float media;
	int Vmax; //valore massimo
	int Vmin; //valore basso
		
	for(i=0;i<n;i++){
		num[i]=rand()%21;
	    printf("%d ",num[i]);
		somma=somma+num[i];
		
	}
	
	Vmax=num[0];
	Vmin=num[0];
	
	for(i=0;i<n;i++){
		if(Vmax<num[i]){
			Vmax=num[i];
		}	
			if(Vmin>num[i]){
				Vmin=num[i];
			}
	}
	media=somma/n;
	printf("\nmedia: %d\n",media);
	printf("valore massimo: %d\n",Vmax);
	printf("valore minimo: %d\n",Vmin);
	
	
		
}
