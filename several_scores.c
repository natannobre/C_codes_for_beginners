#include <stdio.h>

int valid_score(float score);

int main(){	
	int j=1, x=0;
	float nota1, nota2, media=0;
	do{
		do{
			scanf("%f", &nota1);
			j= valid_score(nota1);
			if(j!=0){
				printf("nota invalida\n");
			}
		}while(j!=0);	
		j=1;
		do{
			scanf("%f", &nota2);
			j= valid_score(nota2);
			if(j!=0){
				printf("nota invalida\n");
			}
		}while(j!=0);
		media= (nota1+nota2)/2;
	
		printf("media = %.2f\n", media);
		do{	
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &x);
		}while(x!=1 && x!=2);
		if(x==2){
			break;
		}
	}while(x=1);


	return 0;
}
int valid_score(float score){
	int i=0;

	if(score<0){
		i=1;
	}else if(score>10){
		i=1;
	}
	
	return(i);
}
