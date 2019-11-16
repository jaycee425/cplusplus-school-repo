#include<stdio.h>

int main(){
	int dec;
	int r;
	int i;
	int n=8;
	int ex[n];
	
	printf("inserisci numero decimale: ");
	scanf("%d",&dec);
	
	for(i=0;i<n;i++){
		r=dec%16;
		ex[i]=r;
		dec=dec/16;
	}
	
	for(i=n-1;i>=0;i--){
		if(ex[i]<=10){
			printf("%d",ex[i]);
		}
		if(ex[i]==10){
			printf("A");
		}
		if(ex[i]==11){
			printf("B");			
		}
		if(ex[i]==12){
			printf("C");
		}
		if(ex[i]==13){
			printf("D");
		}
		if(ex[i]==14){
			printf("E");
		}
		if(ex[i]==15){
			printf("F");
		}
	}
	
}
