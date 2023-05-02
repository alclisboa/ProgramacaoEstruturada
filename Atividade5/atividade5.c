#include <stdio.h>

float le_valida_media(){
    float media;
    do{
        printf("Informe a nota (entre 0 e 10): ");
        scanf("%f", &media);
    }while(media < 0 || media > 10);
    return media;
}

float calcular_media(int qtd_medias, float soma_medias){
    return soma_medias / qtd_medias;
}

void imprimir_cabecalho(){
    printf("------------------\n");
    printf("Relatorio da turma\n");
    printf("------------------\n");
}

void imprimir_rodape(int reprovados, int aprovados, float menor_media){
    printf("------------------\n");
    printf("Reprovados: %d\n", reprovados);
    printf("Aprovados: %d\n", aprovados);
    printf("Menor media: %.1f\n", menor_media);
    printf("------------------\n");
    printf("    BSB - 2023\n");
}

int main(){
    int qtd_medias = 0;
    float soma_medias = 0.0;
    int reprovados = 0, aprovados = 0;
    float menor_media = 10.0;

    imprimir_cabecalho();

    while(qtd_medias < 25){
        float media = le_valida_media();
        soma_medias += media;
        qtd_medias++;

        if(media < menor_media){
            menor_media = media;
        }

        if(media >= 6.9){
            aprovados++;
        }else{
            reprovados++;
        }

        char continuar;
        printf("Deseja continuar (s/n)? ");
        scanf(" %c", &continuar);
        if(continuar == 'n'){
            break;
        }
    }

    float media_turma = calcular_media(qtd_medias, soma_medias);

    printf("Media da turma: %.1f\n", media_turma);
    imprimir_rodape(reprovados, aprovados, menor_media);

    return 0;
}