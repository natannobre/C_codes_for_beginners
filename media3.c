#include <stdio.h>

int main(){
	double n1, n2, n3, n4, af, m;

	scanf("%lf", &n1);
	scanf("%lf", &n2);
	scanf("%lf", &n3);
	scanf("%lf", &n4);

	n1*= 2;
	n2*= 3;
	n3*= 4;
	n4*= 1;

	m= (n1+n2+n3+n4)/10;

	if(m >= 7){
		printf("Media: %.1lf\n", m);
		printf("Aluno aprovado.\n");
	}
	if(m < 5){
		printf("Media: %.1lf\n", m);
		printf("Aluno reprovado.\n");
	}
	if(m >= 5 && m < 7){
		printf("Media: %.1lf\n", m);
		scanf("%lf", &af);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1lf\n", af);
		
		m= (m+af)/2;

		if(m >= 5){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");		
		}
		printf("Media final: %.1lf\n", m);
	}


	return 0;
}
