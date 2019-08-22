#include <stdio.h>

int main(){

	int i,count=0;
	float n, media=0;

	for (i = 0; i < 6; i++){
		scanf("%f", &n);

		if(n > 0){
			media+= n;
			count++;
		}
	}
	media/= count;
	printf("%d valores positivos\n", count);
	printf("%.1f\n", media);


	return 0;
}
