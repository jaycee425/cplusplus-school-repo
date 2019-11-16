#include<stdio.h>
int main(){
	int tmp, tot=0;
	do{
		printf("inserisci un numero:");
		scanf("%d",&tmp);
		tot=tot+tmp;
		printf("sei arrivato a: %d",tot);
		// nInserimenti = nInsrimenti+1
		nInserimenti++;
	}while(tot<100);
	printf("sei arrivato a: %d",tot)
}
