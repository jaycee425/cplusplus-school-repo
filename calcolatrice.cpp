#include<stdio.h>

int main(){
	//dichiarazione variabile
	float a;//primo numero
	float b;//secondo numero
	char o;//operatore
	float r;//risultato
	
	printf("inserisci il primo numero\n");
	scanf("%f",&a);
	printf("inserisci operando\n");
	scanf(" %c",&o);
	printf("inserisci il secondo numero\n");
	scanf("%f",&b);
	
	
	//calcoli
	
	if(o=='+'){
		r=a+b;
		printf("%f + %f= %f",a,b,r);		
	}else{
		if(o=='-'){
			r=a-b;
			printf("%f - %f= %f",a,b,r);
		}else{
			if(o=='*'){
				r=a*b;
				printf("%f * %f= %f",a,b,r);
			}else{
				if(o=='/'){
					r=a/b;
					printf("%f / %f= %f",a,b,r);
				}
				
				
			}
		
		}
	}
}
