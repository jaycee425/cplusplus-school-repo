#include<stdio.h>

int main(){
	int n=5;
	int s=10;
	int i,j;
	int temp;
	int a[n]={5,7,10,15,21};
	int b[n]={3,4,9,18,23};
	int z[s];
	
	for(i=0;i<n;i++){
		z[i]=a[i];
	}
	
	for(j=5;j<s;j++){
		z[j]=b[j-n];
	}
	
	for(i=0;i<s;i++){
		printf("%d ",z[i]);
	}
	
	printf("\n");
	
	for(i=0;i<s-1;i++){
		for(j=i+1;j<s;j++){
			if(z[i] > z[j]){
				temp=z[i];
				z[i]=z[j];
				z[j]=temp;
			}
		}
	}
	
	for(i=0;i<s;i++){
		printf("%d ",z[i]);
	}
}
