#include <stdio.h>

int main(){

	int x, y, i, inter=0, gremio=0, emp=0, grenal=0;

	//X = Inter;	Y = Gremio;

	do{
		i=1;
		scanf("%d", &x);
		scanf("%d", &y);

		grenal++;
		if(x > y){
			inter++;
		}else if(x < y){
			gremio++;
		}else{
			emp++;
		}
		do{
			i=0;
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &i);
		}while(i!=1 && i!=2);
			
		if(i==2){
			break;
		}			
	}while(i=1);
	
	printf("%d grenais\n", grenal);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", emp);

	if(inter > gremio){
		printf("Inter venceu mais\n");
	}else if(inter < gremio){
		printf("Gremio venceu mais\n");
	}else{
		printf("Nao houve vencedor\n");
	}

	return 0;
}
