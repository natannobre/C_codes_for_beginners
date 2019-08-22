#include <stdio.h>

int main(){
	int n, i, x, count=0, count1=0;

	scanf("%d", &n);
	for(i=0; i<n; i++){
	
		scanf("%d", &x);
		if(x >= 10 && x <= 20){
			count++;
		}else{
			count1++;
		}
	}
	printf("%d in\n", count);
	printf("%d out\n", count1);

	return 0;
}
