#include <stdio.h>
#include <stdlib.h> // Para alocar memória dinamicamente
#include <time.h>   // Para a função clock()
#include <math.h>  

void ordenacao(int lista[], long long num) {
    int i, j, aux;
    for (i = 0; i < num; i++) {
        for (j = 0; j < num - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}


void VetorOrdenado(int vetor[], long long tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }
}

void VetorInverso(int vetor[], long long tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = tamanho - 1 - i;
    }
}


int main() {
    printf("digite o tamanho do vetor\n");
    int n;
    scanf("%d",&n);

    long long tam=(long long)pow(10,n);

    int *vetor;      
    vetor = (int *)malloc(tam * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    //Vetor ordenado
    printf("Vetor Ordenado com n = %lld\n", tam);
    VetorOrdenado(vetor, tam);
    printf("antes\n");
    imprimirVetor(vetor, tam);
    ordenacao(vetor, tam);
    printf("depois\n");
    imprimirVetor(vetor, tam);

    //Vetor inversa
    //printf("Vetor Inverso com n = %lld\n", tam);
    //VetorInverso(vetor, tam);
    //printf("antes\n");
    //imprimirVetor(vetor, tam);
    //ordenacao(vetor, tam);
    //printf("depois\n");
    //imprimirVetor(vetor, tam);


    free(vetor);

    return 0;
}
