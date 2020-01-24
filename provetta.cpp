#include<stdio.h>

int main(){
	char s[100];
	char s1[100];
	int i,j=0,l;
	int k=0;
	int l1=0;
	
	
	gets(s);
	l=0;
	while(s[l]!='\0')l++;
	printf("%s\n",s);
	for(i=0;i<l;i++){
		j++;
		if(s[i]!=' ' && s[i-1]==' '){
			printf("%d",j);
		}else{
			printf(" ");
		}
	}
	
	printf("\nquale parola vuoi cancellare?:");
	scanf("%s",s1);
	
	for(i=0;i<=l-l2;i++){
		trovato=1;
		for(j=0;j<l2;j++){
			if(s1[j]!=s[i+j]){
				trovato=0;
			}
		}
		if(trovato==1){
			
		}
	}	
;
	
	
}
