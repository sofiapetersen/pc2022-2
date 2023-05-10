#include <stdio.h>
#include <stdlib.h>

struct cel {
    int n;
    struct cel *prox;
};

typedef struct cel celula;
celula *cria();
void insereOrdem(int num, celula *p_ini);
void insere(int ns, celula *p);
void imprime(celula *ini);
void imprimeArquivo(celula *ini);


int main(){
    int numeros;

    celula *ini;
    ini = cria();

    FILE *entrada;
    entrada = fopen("arquivo.txt", "r");
    while(!feof(entrada)){
        fscanf(entrada, "%d", &numeros);
        insereOrdem(numeros, ini);
    }
    imprime(ini);
    fclose(entrada);

    imprimeArquivo(ini);
    return 0;
}

celula *cria(){
    celula *head;
    head = (celula *)malloc(sizeof(celula));
    head->prox = NULL;
    return head;
}

void insereOrdem(int num, celula *p_ini){
    celula *p;
    for(p = p_ini; p->prox != NULL && p->prox->n < num; p = p->prox);
    insere(num, p);
}

void insere(int ns, celula *p){
    celula *nova;

    nova = (celula *)malloc(sizeof(celula));
    nova->n = ns;
    nova->prox = p->prox;
    p->prox = nova;
}

void imprime(celula *ini){
    celula *p;
    for(p = ini->prox; p != NULL; p = p->prox){
        printf("%d\n", p->n);
    }
}

void imprimeArquivo(celula *ini){

    FILE *saida;
    saida = fopen("saida.txt", "w");
    celula *p;
    for(p = ini->prox; p != NULL; p = p->prox){
        fprintf(saida, "%d\n", p->n);
    }
    fclose(saida);
}