#include <stdio.h>
int main(){
	int num[10], i=0, maior=0;

	for(i=0; i<10; i++){
		scanf("%d", &num[i]);
	}
	for(i=0; i<10; i++){
	if(num[i]>maior)maior= num[i];
	}
	printf("\nO maior número é:%d\n", maior);

return(0);
}
