#include <stdio.h>

int main(){

	int time, vel;
	float gasto = 0;

	scanf("%d%d", &time, &vel);

	gasto= time*vel;
	gasto/= (float)12;

	printf("%.3f\n", gasto);

	return 0;
}
