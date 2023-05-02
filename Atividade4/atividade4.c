#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
	char nome[50], nome_formatado[50];
	int i=0, ultimo_espaco=0;
	
	printf("Formatador de nome\n");
	
	printf("Informe o nome completo: ");
	scanf("%[^\n]s",&nome);
	
	printf("Nome informado: %s\n",nome);
	
	for(i=0;i<strlen(nome);i++){
		nome[i] = toupper(nome[i]);
	}
	
	printf("Nome UPPER: %s\n",nome);
	
	for(i=0;i<strlen(nome);i++){
		if(nome[i]==' '){
			ultimo_espaco = i;
		}
	}	
	
	printf("ultimo_espaco: %d\n",ultimo_espaco);

	for(i=ultimo_espaco+1;i<strlen(nome);i++){
		printf("%c",nome[i]);
	}
	
	printf(" %c.",nome[0]);
	
	for(i=0;i<ultimo_espaco;i++){
		if(nome[i]==' '){
			printf(" %c.",nome[i+1]);
		}
	}

	return 0;
}