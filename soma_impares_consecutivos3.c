#include <stdio.h>

int main(){
	int n, x, y, soma=0, count=0, i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &x);
		scanf("%d", &y);
		j= x;
		count= 0;
		soma=0;
		while(count != y){
			if (j%2 != 0){
				soma+= j;
				count++;
			}
			j++;
		}
		printf("%d\n", soma);

	}

	return 0;
}