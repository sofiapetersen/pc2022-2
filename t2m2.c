#include <stdio.h>
#include <math.h>

#define MAXDELEGACIAS 5
#define MAXVITIMAS 10

typedef struct {
int x;
int y;
} coord;

typedef struct {
coord local;
float raio;
int capac;
} delegacia;

typedef struct {
coord local;
} vitima;

delegacia listadelegacias[MAXDELEGACIAS];
vitima listavitimas[MAXVITIMAS];

void questao01(int *qdel, int *qvit);
vitima questao02(int del, int vit);
void questao03(vitima x);
void questao04(int qdel, int qvit);
float dist(int x1, int y1, int x2, int y2);

int main()
{
int qtde_del, qtde_vit;
questao01(&qtde_del, &qtde_vit);
questao03(questao02(qtde_del, qtde_vit));
questao04(qtde_del, qtde_vit);

return 0;
}

void questao01(int *qdel, int *qvit){

int j=0,x=0, i;

do{
if(j >= 1)
    printf("Valor maior que a capacidade\n");

printf("\nQuantidade total de delegacias: ");
scanf("%d", qdel);
j++;
}while (*qdel > MAXDELEGACIAS);

for (i=0; i < *qdel; i++){
printf("DELEGACIA\nCoordenada x: ");
scanf("%d", &listadelegacias[i].local.x);
printf("Coordenada y: ");
scanf("%d", &listadelegacias[i].local.y);
printf("Raio: ");
scanf("%f", &listadelegacias[i].raio);
printf("Capacidade: ");
scanf("%d", &listadelegacias[i].capac);

}
do{
if(x >= 1)
    printf("Valor maior que a capacidade\n");

printf("\nQuantidade total de vitimas: ");
scanf("%d", qvit);
x++;
}while (*qvit > MAXVITIMAS);

for (i=0; i < *qvit; i++){
printf("VITIMA\nCoordenada x: ");
scanf("%d", &listavitimas[i].local.x);
printf("Coordenada y: ");
scanf("%d", &listavitimas[i].local.y);
}

}

vitima questao02(int del, int vit){

int i, j, m=-1;    // m é contador de vitimas
float t, d=10000;   // d é uma distancia alta pra comparação

for (i=0; i <vit; i++){         // i pra vitimas
    for(j=0; j<del; j++){       // j pra delegacias 
        t = dist(listadelegacias[j].local.x, listadelegacias[j].local.y, listavitimas[i].local.x, listavitimas[i].local.y);
        if (t < d){
            d = t;
            m = i;
        }
    }
    
}
return listavitimas[m];     //quando t for maior que d, ou seja, achou o raio menor entao imprime o m que é o vetor da vitima
}

float dist(int x1, int y1, int x2, int y2){

return sqrt(pow((x1-x2),2) + pow((y1-y2),2));

}

void questao03(vitima x){

    printf("\n");
    printf("Vitima mais proxima:\n");

printf("Coordenada x: %d\n", x.local.x);
printf("Coordenada y: %d\n", x.local.y);

}

void questao04(int qdel, int qvit){

int i, j, c;      // c é o contador
float t;

for (i=0; i <qdel; i++){
    c=0;
    for(j=0; j<qvit; j++){
        t = dist(listadelegacias[i].local.x, listadelegacias[i].local.y, listavitimas[i].local.x, listavitimas[i].local.y);
         if (t <= listadelegacias[i].raio){
            c++;
            }
        }

    printf("Delegacia %d: ", i);
        if (c < listadelegacias[i].capac){
            printf("%d -\n", c);     // se o contador mostrar que ta abaixo da capacidade
        }
        if (c == listadelegacias[i].capac){
            printf("%d =\n", c);     // se o contador mostrar que ta no limite da capacidade
        }
        if (c > listadelegacias[i].capac){
            printf("%d +\n", c);     // se o contador mostrar que ta a cima da capacidade
        }

    }
}
