#include <stdio.h>
#include <string.h>

int main(){
	char a[1001], b[1001];
	int n, i, j, l, tam1, tam2, count=0;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		count=0;
		l= 0;
		scanf(" %s", a);
		scanf(" %s", b);
	
		tam1= strlen(a);
		tam2= strlen(b);

		
		for(j= tam1-tam2; j<(tam1); j++){
			if(a[j]==b[l]){
				count++;
			}
			l++;
		}

		if(count==tam2){
			printf("encaixa\n");
		}
		}else{
			printf("nao encaixa\n");
		}
	}


	return 0;
}
