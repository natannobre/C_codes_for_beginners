#include <stdio.h>

int main(){
	int matriz[3][3], i, j, plus_l=0, plus_l2=0, plus_l3=0, plus_c=0, plus_c2=0, plus_c3=0, plus_p=0, plus_s=0;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

		for(j=0; j<3; j++){
			plus_l+= matriz[0][j];
		}

		for(j=0; j<3; j++){
			plus_l2+= matriz[1][j];
		}

		for(j=0; j<3; j++){
			plus_l3+= matriz[2][j];
		}
		
		for(i=0; i<3; i++){
			plus_c+= matriz[i][0];
		}
		
		for(i=0; i<3; i++){
			plus_c2+= matriz[i][1];
		}

		for(i=0; i<3; i++){ 
			plus_c3+= matriz[i][2];
		}
		
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(i==j){
					plus_p+= matriz[i][j];
				}
			}
		}
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if((i==0 && j==2) || (i==1 && j==1) || (i==2 && j==0)){
					plus_s+= matriz[i][j];
				}
			}
		}
		
		if(plus_l==plus_l2 && plus_l2==plus_l3 && plus_l3==plus_c && plus_c==plus_c2 && plus_c2==plus_c3 && plus_c3==plus_p && plus_p==plus_s){
			printf("\nSIM\n");
		}else{
			printf("\nNAO\n");
		}

	return 0;
}
