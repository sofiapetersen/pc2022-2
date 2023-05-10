#include <stdio.h>
#include <stdlib.h>

struct cel{
    int n;
    char c;
    struct cel *prox;
};

typedef struct cel celula;
celula *criar();
void insereFim(int num, char c, celula *p_ini);
void imprime(FILE *saida, celula *ini);

int main(){

    int i, num;
    char letra;
    celula *ini[10];
    
    for(i=0; i < 10; i++){
        ini[i] = criar();
    }

    FILE *entrada;
    entrada = fopen("arquivo.txt", "r");
    while(!feof(entrada)){
        fscanf(entrada, "%d %c", &num, &letra);
        insereFim(num, letra, ini[num]);
    }
    fclose(entrada);

    FILE *saida;
    saida = fopen("saida.txt", "w");
    for(i=0; i < 10; i++){
        imprime(saida, ini[i]);
   }
   fclose(saida);

}

celula *criar(){
    celula *head;

    head = (celula *)malloc(sizeof(celula));
    head->prox = NULL;
    return head;
}

void insereFim(int num, char c, celula *p_ini){
    celula *nova, *fim;
    nova = (celula *)malloc(sizeof(celula));
    for(fim = p_ini; fim->prox != NULL; fim = fim->prox);
    nova->c = c;
    nova->n = num;
    nova->prox = fim->prox;
    fim->prox = nova;
}

void imprime(FILE *arqv, celula *ini){

    celula *p;
    for(p = ini->prox; p != NULL; p = p->prox){
        fprintf(arqv, "%c ", p->c);
    }
}