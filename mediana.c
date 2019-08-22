#include <stdio.h>
	
int main(){
	int i, n, j, x; 
	float med=0, y;
	
	scanf("%d", &n);
	y= n;
	float vet[n];
	for(i=0; i<n; i++){
		scanf("%f", &vet[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(vet[i]>vet[j]){
				x= vet[i];
				vet[i]= vet[j];
				vet[j]= x;
			}
		}
	}
	if(n%2!=0){
		x= (y-1)/2;
		printf("%.2f\n", vet[x]);
	}
	if(n%2==0){
		med= (vet[(n/2)-1]+vet[(n/2)])/2;
		printf("%.2f\n", med);
	}

	return 0;
}
