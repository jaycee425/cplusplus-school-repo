#include<stdio.h>
#include<stdlib.h>

int main(){
	int num[20];
	int rand();
	float n=20;
	int i;
	int somma=0;
	float media;
	int Vm; //valore massimo
	int Vb; //valore basso
	
	
	
	for(i=0;i<n;i++){
		num[i]=rand()%21;
	    printf("%d ",rand()%21);
		somma=somma+num[i];
		Vm=num[0];
		Vb=num[0];
		if(Vm<num[i]){
			Vm=num[i];
		}	
			if(Vb>num[i]){
				Vb=num[i];
			}
	}
	
	
	media=somma/n;
	printf("\nmedia: %d\n",media);
	printf("valore massimo: %d\n",Vm);
	printf("valore minimo: %d\n",Vb);
	
	
		
}
