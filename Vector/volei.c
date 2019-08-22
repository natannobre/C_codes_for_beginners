#include <stdio.h>

int main(){
	int i, n;
	float vet[3], vet_1[3], soma_s=0, soma_s1=0, soma_b=0, soma_b1=0, soma_a=0, soma_a1=0;
	float acerto_s=0, acerto_b=0, acerto_a=0;
	char nome[15];
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf(" %s", nome);
		scanf("%f %f %f", &vet[0], &vet[1], &vet[2]);
		scanf("%f %f %f", &vet_1[0], &vet_1[1], &vet_1[2]);
				
		soma_s+= vet[0];
		soma_s1+= vet_1[0]; 
		soma_b+= vet[1];		
		soma_b1+= vet_1[1];
		soma_a+= vet[2];
		soma_a1+= vet_1[2];
		
	}
		acerto_s= (100/soma_s)*soma_s1;
		acerto_b= (100/soma_b)*soma_b1;
		acerto_a= (100/soma_a)*soma_a1;

		printf("Pontos de Saque: %.2f %%.\n", acerto_s);
		printf("Pontos de Bloqueio: %.2f %%.\n", acerto_b);
		printf("Pontos de Ataque: %.2f %%.\n", acerto_a);
	


	return (0);
}
