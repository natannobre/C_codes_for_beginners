#include <stdio.h>

int main(){

	int x;
	float y, cons=0;

	scanf("%d %f", &x, &y);

	cons= x/y;

	printf("%.3f km/l\n", cons);

	return 0;
}
