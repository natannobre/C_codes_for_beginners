#include <stdio.h>

int main(){
	int i, t, q;
	long int f[61];

	scanf("%d", &q);
	
	f[0]= 0;
	f[1]=1;
	for(i=2; i<=60; i++){
		f[i]= f[i-1]+f[i-2];
	}

	for(i=0; i < q; i++){
		scanf("%d" ,&t);
		printf("Fib(%d) = %ld\n",t, f[t]);		
	}




	return 0;
}
