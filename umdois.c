#include <stdio.h>
#include <string.h>

int main(){
	char frase[10];
	int n, i, j, count=0, tam=0;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf(" %[^\n]", frase);		
		tam= strlen(frase);	
		
			if((frase[0]=='o' && (frase[1]=='n' || frase[2]=='e')) || (frase[1]=='n' && frase[2]=='e')){
			printf("1\n");
			}else{
				if((frase[0]=='t' && (frase[1]=='w' || frase[2]=='o')) || (frase[1]=='w' && frase[2]=='o')){
					printf("2\n");
				}else{
					printf("3\n");
				}			
			}
	}
	 
	return 0;
}
