#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct antena{
    int x;
    int y;
    float raio;
    struct antena *prox;
};

struct usuario{
    int x;
    int y;
    struct usuario *prox;
};

typedef struct antena Acelula;
typedef struct usuario Ucelula;
Acelula *AcriarLista();
Ucelula *UcriarLista();
void Ainsere(int a, int b, float r, Acelula *pALista);
void Uinsere(int a, int b, Ucelula *pUlista);
void imprimeA(Acelula *ini);
void imprimeU(Ucelula *ini);
float distancia(Ucelula *iniU, Acelula *iniA);


int main(){
    int qntdA, xA, yA, qntdU, xU, yU, i;
    float raio, qualidade;
    Acelula *listaA;
    listaA = AcriarLista();

    Ucelula *listaU, *p;
    listaU = UcriarLista();

    FILE *entrada;
    entrada = fopen("arquivo.txt", "r");
    fscanf(entrada, "%d", &qntdA);

    for(i=0; i < qntdA; i++){
        fscanf(entrada, "%d %d %f", &xA, &yA, &raio);
        Ainsere(xA, yA, raio, listaA);
    }

    fscanf(entrada, "%d", &qntdU);
    for(i=0; i < qntdU; i++){
        fscanf(entrada, "%d %d", &xU, &yU);
        Uinsere(xU, yU, listaU);
    }
    fclose(entrada);

    printf("Dados Antenas:\n");
    imprimeA(listaA);
    printf("Dados Usuarios:\n");
    imprimeU(listaU);

    FILE *saida;
    saida = fopen("saida.txt", "w");
    for(p = listaU->prox; p != NULL; p = p->prox){
        qualidade = distancia(p, listaA);
        fprintf(saida, "%f\n", qualidade);
    }
    fclose(saida);
    return 0;
}

Acelula *AcriarLista(){
    Acelula *head;
    head = (Acelula *)malloc(sizeof(Acelula));
    head->prox = NULL;
    return head;
}

Ucelula *UcriarLista(){
    Ucelula *head;
    head = (Ucelula *)malloc(sizeof(Ucelula));
    head->prox = NULL;
    return head;
}

void Ainsere(int a, int b, float r, Acelula *pALista){
    Acelula *nova, *fim;
    nova = (Acelula *)malloc(sizeof(Acelula));
    for(fim = pALista; fim->prox != NULL; fim = fim->prox);
    nova->x = a;
    nova->y = b;
    nova->raio = r;
    nova->prox = fim->prox;
    fim->prox = nova;
}

void Uinsere(int a, int b, Ucelula *pUlista){
    Ucelula *nova, *fim;
    nova = (Ucelula *)malloc(sizeof(Ucelula));
    for(fim = pUlista; fim->prox != NULL; fim = fim->prox);
    nova->x = a;
    nova->y = b;
    nova->prox = fim->prox;
    fim->prox = nova;
}

void imprimeA(Acelula *ini){
    Acelula *p;
    for(p = ini->prox; p != NULL; p = p->prox){
        printf("%d %d %.2f\n", p->x, p->y, p->raio);
    }
}

void imprimeU(Ucelula *ini){
    Ucelula *p;
    for(p = ini->prox; p != NULL; p = p->prox){
        printf("%d %d\n", p->x, p->y);
    }
}

float distancia(Ucelula *iniU, Acelula *iniA){
    Acelula *p;
    float dist, menor;
    int cont=-1;
    menor=99999;
    for(p = iniA->prox; p != NULL; p = p->prox){
        dist = sqrt(pow(iniU->x - p->x,2)+ pow(iniU->y - p->y,2));
        if(dist <= p->raio){
            if(dist <= menor)
            menor = dist;
            cont++;
        }    
    }
if (cont == -1){
return -1;
}
else{
    return 1/(1+ sqrt(menor));
}

}