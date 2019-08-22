#include <stdio.h>
#include <string.h>

int main(){

	char frase1[20], frase2[20], frase3[20];
	char frase1_aux[20]= {'v', 'e', 'r', 't', 'e', 'b', 'r', 'a', 'd', 'o'}, frase2_aux[20]= {'a', 'v', 'e'}, frase3_aux[20]= {'i', 'n', 's', 'e', 't', 'o'}, frase4_aux[20]= {'c', 'a', 'r', 'n', 'i', 'v', 'o', 'r','o'}, frase5_aux[20]= {'h', 'e', 'r', 'b', 'i', 'v', 'o', 'r','o'}, frase6_aux[20]= {'h', 'e', 'm', 'a', 't', 'o', 'f', 'a', 'g', 'o'}; 
	
	int tam1, tam2, tam3, i, j, count1=0, count2=0, count3=0;

	scanf(" %s", frase1);
	scanf(" %s", frase2);
	scanf(" %s", frase3);

	tam1= strlen(frase1);
	for(i=0; i<tam1; i++){
		if(frase1[i]==frase1_aux[i]){
			count1++;
		}
	}

	if(count1==tam1){
		tam2= strlen(frase2);
		for(i=0; i<tam2; i++){
			if(frase2[i]==frase2_aux[i]){
				count2++;
			}
		}
		if(count2==tam2){
			tam3= strlen(frase3);
			for(i=0; i<tam3; i++){
				if(frase3[i]==frase4_aux[i]){
					count3++;
				}
			}	
			if(count3==tam3){
				printf("aguia\n");
			}else{
				printf("pomba\n");
			}

		}else{
			tam3= strlen(frase3);
			for(i=0; i<tam3; i++){
				if(frase3[i]==frase5_aux[i]){
					count3++;
				}
			}	
			if(count3==tam3){
				printf("vaca\n");
			}else{
				printf("homem\n");
			}	
		}	

	}else{
		tam2= strlen(frase2);
		for(i=0; i<tam2; i++){
			if(frase2[i]==frase3_aux[i]){
				count2++;
			}
		}
		if(count2==tam2){
			tam3= strlen(frase3);
			for(i=0; i<tam3; i++){
				if(frase3[i]==frase6_aux[i]){
					count3++;
				}
			}	
			if(count3==tam3){
				printf("pulga\n");
			}else{
				printf("lagarta\n");
			}
		}else{
			tam3= strlen(frase3);
			for(i=0; i<tam3; i++){
				if(frase3[i]==frase6_aux[i]){
					count3++;
				}
			}	
			if(count3==tam3){
				printf("sanguessuga\n");
			}else{
				printf("minhoca\n");
			}		
		}
	}

	return 0;
}
