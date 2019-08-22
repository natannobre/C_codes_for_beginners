#include <stdio.h>
int main(){
	int num[10], i=0, maior=0, menor;

	for(i=0; i<10; i++){
		scanf("%d", &num[i]);
	}
	menor= num[9];
	for(i=0; i<10; i++){
		if(num[i]>maior){
			maior= num[i];		
		}
		if(num[i]<menor){
			menor= num[i];
		}
	}	
	for(i=0; i<10; i++){
		if (num[i]==maior){
			printf("\nPosição do maior é:%dº\n", (i+1));
			}
		if (num[i]==menor){
			printf("\nPosição do menor é:%dº\n", (i+1));	
			}
	}
	printf("\nO maior número é:%d\n", maior);
	printf("\nO menor número é:%d\n", menor);

return(0);
}
