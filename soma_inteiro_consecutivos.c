#include <stdio.h>

int main(){
	int a, n, i, j, soma=0;

	scanf("%d", &a);
	do{
		scanf("%d", &n);
	} while(n<=0);

	for (i = a; i < (a+n); i++){
		soma+= i;
	}
	printf("%d\n", soma);


	return 0;
}