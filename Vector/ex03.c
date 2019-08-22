#include <stdio.h>
int main(){
	int pa[10], i=0, j=1, a1, an, r;

	scanf("%d", &a1);
	scanf("%d", &r);
	pa[0]= a1;
	for(i=0; i<10; i++){
		if(j!=10){
			an= a1+j*r;
			pa[j]= an;	
			j+=1;
			}
	}
	for(i=0; i<10; i++){
		printf("\n%d\n", pa[i]);
	}

	return(0);
}
