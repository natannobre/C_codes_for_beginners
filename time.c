#include <stdio.h>

int main(){
	int time, seg=0, min=0, h=0;

	scanf("%d", &time);

	h= time/3600;
	time= time%3600;
		
	min= time/60;
	time= time%60;
	
	seg= time;
	
	printf("%d:%d:%d\n", h, min, seg);

	return 0;
}
