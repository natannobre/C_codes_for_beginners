void area(int n);
void perim(int n);
long int fat(int num);
int somaimp(int x, int y);
void maiormenor(int x);
int somatorio(int x);
long int bact(int y);
void primo(int x);



void area(int n){
	int i, j;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf(" *");
		}
		printf("\n");
	}

	return;
}



void perim(int n){
	int i, j;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==0 || i==(n-1)){
				printf(" *");
			}else if(j==0 || j==(n-1)){
						printf(" *");
			}else{
					printf("  ");
			}
		}

		printf("\n");

	}

	return;
}



long int fat(int num){
	long int fat, i;

	fat= num;	
	for(i=(num-1); i>0; i--){ 	
		fat= fat*i;
	}

	return(fat);
}


int somaimp(int x, int y){
	int i, soma=0;

	for(i=x; i<=y; i++){
		if(i%2!=0){
			soma= soma+i;
		}
	}

	return(soma);
}



void maiormenor(int x){
	int i, num, menor, maior=0;

	for(i=0; i<x; i++){
			scanf("%d", &num);
		
			if(i==0){
				menor= num;
			}
			if(num > maior){
				maior= num;
			}
			if(num < menor){
				menor= num;
			}
	}
	
	printf("\nO Maior é:%d\n", maior);
	printf("\nO Menor é:%d\n", menor);


	return;
}



int somatorio(int x){
	int i, soma=0;

	for(i=0; i<=x; i++){
		soma+=i;
	}
	
	return(soma);
}



long int bact(int y){
	int i;
	long int bac=1;
		
	for(i=1; i<=y; i++){
		bac*=2;

	}


	return(bac);
}



void primo(int x){
	int i, v=0;

	for(i=1; i<=x; i++){

		if(x%i==0){
			v++;
		}
	}
		if(v==2){
			printf("\nSIM\n");

		}else{
			printf("\nNÃO\n");
		}

	return;
}

