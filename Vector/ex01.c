#include <stdio.h>
int main(){
	int num[10], i=0, menor=0;

	for(i=0; i<10; i++){
		scanf("%d", &num[i]);
	}
	menor= num[0];
	for(i=0; i<10; i++){
	if(num[i]<menor)menor= num[i];
	}
	printf("\nO menor número é:%d\n", menor);

return(0);
}
