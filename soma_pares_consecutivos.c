#include <stdio.h>

int main(){
	int x, i, count=0, soma=0;
	do{
		scanf("%d", &x);
		if (x==0){
			break;
		}else{
			i= x;
			count= 0;
			soma= 0;
			while(count != 5){
				if (i%2==0){
					soma+= i;
					count++;
				}
				i++;
			}
			printf("%d\n", soma);
		}

	}while(x);

	return 0;
}