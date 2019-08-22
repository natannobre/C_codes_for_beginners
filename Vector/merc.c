#include <stdio.h>

int main(){
	int i, p, pri=0, seg=0;
	
	scanf("%d", &p);
	
	float vet[p];

	for(i=0; i<p; i++){	
		scanf("%f", &vet[i]);
	}
	float vet_1[p];
	
	for(i=0; i<p; i++){	
		scanf("%f", &vet_1[i]);
	}
	char str[p];

	for(i=0; i<p; i++){	
		scanf(" %c", &str[i]);
	}

	for(i=0; i<p; i++){
		if(vet_1[i]==vet[i]){
			pri++;
			printf("\npri= %d\n", pri);
		}else if(vet[i]>vet_1[i] && str[i]=='M'){
				seg++;
				printf("\nseg= %d\n", seg);
		}else if(vet[i]<vet_1[i] && str[i]=='m'){
				seg++;
				printf("\nseg= %d\n", seg);
		}
	}
	if(pri!=0 && seg!=0 && pri==seg){
		printf("\nprimeiro\n");
	}else if(pri==0 && seg==0 && pri==seg){
		printf("\nempate\n");
	}else if(pri > seg){
		printf("\nprimeiro\n");
	}else{
		printf("\nsegundo\n");
	}

	return 0;
}
