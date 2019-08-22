#include <stdio.h>

int main(){
	float vet[3], a, b, c;
	int i, j;

	for(i=0; i<3; i++){	
		scanf("%f", &vet[i]);
	}
	
	for(i = 0; i < 2; i++){
		for(j = i+1; j < 3; j++){
			if(vet[i]<vet[j]){
				a= vet[i];
				vet[i]= vet[j];
				vet[j]= a;
			}
		}
	}
	
	a= vet[0];
	b= vet[1];
	c= vet[2];

	if (a >= (b+c)){

		printf("NAO FORMA TRIANGULO\n");

	}else{

		if ((a*a) == ((b*b)+(c*c))){

			printf("TRIANGULO RETANGULO\n");

		}
		if ((a*a) > ((b*b)+(c*c))){
	
			printf("TRIANGULO OBTUSANGULO\n");

		}
		if ((a*a) < ((b*b)+(c*c))){
	
			printf("TRIANGULO ACUTANGULO\n");
	
		}
		if (a == b && a == c && b == c){
		
			printf("TRIANGULO EQUILATERO\n");
	
		}
		if ((a == b && a != c) || (a == c && a != b) || (c == b && c != a)){

			printf("TRIANGULO ISOSCELES\n");
	
		}
	}

	return 0;
}
