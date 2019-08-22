#include <stdio.h>

int main(){

int a, b, s, maior=0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &s);

	maior= a;
	
	if(b > a){
		maior= b;

	}else if(s > a){
		maior= s;
	}

	if(s > b && b > a){
		maior= s;
	}
	
	printf("%d eh o maior", maior);



	return 0;
}
