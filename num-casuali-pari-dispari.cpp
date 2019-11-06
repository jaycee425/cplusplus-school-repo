/*
	oggetto:programma che genera un vettore di numeri
	casuali e contare i pari e i dispari e gli 0
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int max;
	int min;
	int n=5;
	int num[n];
	int even=0; //contatore numeri pari
	int odd=0;  //contatore numeri dispari
	int zero=0; //contatore degli zeri
	
	printf("valore minimo intervallo: ");
	scanf("%d",&min);
	printf("valore minimo intervallo: ");
	scanf("%d",&max);
	
	for(int i=0;i<n;i++){
		num[i]=min+rand()%(max-min);
		printf("%d ",num[i]);
	}
	
	for(int i=0;i<n;i++){
		if(num[i]%2==0 && num[i]!=0){
			even++;			
		}
		if(num[i]%2==1 && num[i]!=0){
			odd++;
		}
		if(num[i]==0){
			zero++;
		}				
	}
	
	printf("\ni numeri pari sono: %d",even);
	printf("\ni numeri dispari sono:%d",odd);
	printf("\n gli zeri sono:%d",zero);
	
	
}
