#include <stdio.h>
#include <string.h>

int main (){
    int i, tam;
    char num, num_cont[101];
    
    scanf (" %c", &num);
    
    fgets(num_cont,101, stdin);
    fgets(num_cont,101, stdin);

    tam = strlen(num_cont);
    
    for (i = 0;num_cont[i]; i++){
        if (num_cont[i] != num){
            printf ("%c", num_cont[i]);
			}
    }
    
    return (0);
}
