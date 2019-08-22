#include <stdio.h>

FILE *arquivo;

typedef struct {
    char nome[20];
    char data[20];
    char cpf[12];
}usuario;

usuario lista_usuario;

int main(){
		
		arquivo= fopen("arquivo.txt", "w");

		scanf ("%[^\n]", lista_usuario.nome);
		fprintf(arquivo, "\nnome do usuario: %s\n", lista_usuario.nome);
      scanf ("%s", lista_usuario.data);
		fprintf(arquivo, "data: %s\n", lista_usuario.data);
      scanf ("%s", lista_usuario.cpf);
		fprintf(arquivo, "cpf: %s\n", lista_usuario.cpf);
		
		fclose(arquivo);

		arquivo= fopen("arquivo.txt", "r");
		
		printf("\n%s\n", lista_usuario.nome);
		fread(&lista_usuario.nome, sizeof(usuario), 1, arquivo);
		printf("\n%s\n", lista_usuario.data);
		fread(&lista_usuario.data, sizeof(usuario), 1, arquivo);
		printf("\n%s\n", lista_usuario.cpf);
		fread(&lista_usuario.cpf, sizeof(usuario), 1, arquivo);	

		fclose(arquivo);


	return 0;
}
