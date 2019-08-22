#include <stdio.h>

int main(){
	int inicio, final, i, count=0;

	scanf("%d %d", &inicio, &final);

	 if (inicio == 0 && final == 0){
		count= 24;
		printf("O JOGO DUROU %d HORA(S)\n", count);
	}else if (inicio < final && (final != 0 || inicio != 0)){
		for(i = inicio; i < final; i++){
			count++;
		}
		printf("O JOGO DUROU %d HORA(S)\n", count);
	}else if ((inicio==final) || inicio > final && (final != 0 || inicio != 0)){
		for(i = 0; i < final; i++){
			count++;
		}
		count+= (24-inicio);
		printf("O JOGO DUROU %d HORA(S)\n", count);
	}

	return 0;
}
