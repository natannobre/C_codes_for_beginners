#include <stdio.h>

int main(){
	char senha_fixa[5]={'2','0','0','2','\0'}, senha[5];
	int i=1;

	do{
		int j, count=0;
		scanf("%s", senha);
		
		for(j=0; j<4; j++){
			if(senha_fixa[j]==senha[j]){
				count++;
			}
		}
		if(count==4){
			printf("Acesso Permitido\n");
			i=0;
		}else{
			printf("Senha Invalida\n");
		}

	}while(i);



	return 0;
}
