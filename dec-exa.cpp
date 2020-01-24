#include<stdio.h>

int main(){
	int dec;
	int r;
	int i;
	int n=8;
	int hex[n];
	
	printf("inserisci numero decimale: ");
	scanf("%d",&dec);
	
	for(i=0;i<n;i++){
		r=dec%16;
		hex[i]=r;
		dec=dec/16;
	}
	
	for(i=n-1;i>=0;i--){
		if(hex[i]<=10){
			printf("%d",ex[i]);
		}
		if(hex[i]==10){
			printf("A");
		}
		if(hex[i]==11){
			printf("B");			
		}
		if(hex[i]==12){
			printf("C");
		}
		if(hex[i]==13){
			printf("D");
		}
		if(hex[i]==14){
			printf("E");
		}
		if(hex[i]==15){
			printf("F");
		}
	}
	
}
