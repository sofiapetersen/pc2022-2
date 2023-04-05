#include <stdio.h>
#include <math.h>

#define TAM 12

struct teste {
    float banhado;
    float agua;
    float campo;
    float arroz;
    float solo;
    float restinga;
    float aluvial;
    float praia;
    float urbana;
    float transicao;
    float alagado;
    float pinus;
    float dunas;
};
struct teste Q[TAM];

void PREENCHER (void);
float PERCENTUAL_MEDIO_ANTROPICO (int bimestre);
void PERCENTUAL_AREA_URBANA (int *maior, int *menor);
float CRESCIMENTO_ARROZ (int mes);
void listar(int i);

int main(){

int opcao, i, bi, me, ma, mes_arroz;
float antropico, aumento;

do{
printf("\nMENU\n");
printf("1- Questao 1\n2- Questao 2\n3- Questao 3\n4- Questao 4\n5- Listar\n6- Sair\n");
scanf("%d", &opcao);
switch(opcao){
 case 1:
    PREENCHER();
    break;
case 2:
    printf("Escolha um bimestre:");
    printf("\n1- Bimestre 1: jan + fev");
    printf("\n2- Bimestre 2: mar + abr");
    printf("\n3- Bimestre 3: maio + jun");
    printf("\n4- Bimestre 4: jul + ago");
    printf("\n5- Bimestre 5: set + out");
    printf("\n6- Bimestre 6: nov + dez\n");
    scanf("%d", &bi);
    antropico = PERCENTUAL_MEDIO_ANTROPICO(bi);
    printf("Media: %.2f", antropico);

    break;
case 3:
    PERCENTUAL_AREA_URBANA(&ma, &me);
    break;
case 4:
    printf("Escolha um mes");
    printf("\n1- Janeiro\t2- Fevereiro\t3- Marco\t4- Abril\t5- Maio\t6- Junho\t7- Julho\t8- Agosto\t9- Setembro\t10- Outubro\t11- Novembro\t12- Dezembro\n");
    scanf("%d", &mes_arroz);
    aumento = CRESCIMENTO_ARROZ(mes_arroz);
    printf("Aumento de %.2f%%", aumento);
    break;
case 5:
     for(i=0; i<TAM; i++){
    if(Q[i].banhado != '\0'){
    listar(i);
      }
    }
break;
case 6:
    break;
default:
    printf("Opcao invalida\n");
}
} while (opcao!=6);
    return 0;
}

void PREENCHER (void){

int i;
    for(i=0; i< TAM; i++){
        printf("Complete o mes de vetor %d\n", i);
        printf("Banhado: ");
        scanf("%f", &Q[i].banhado);
        printf("Agua: ");
        scanf("%f", &Q[i].agua);
        printf("Campo: ");
        scanf("%f", &Q[i].campo);
        printf("Arroz: ");
        scanf("%f", &Q[i].arroz);
        printf("Solo: ");
        scanf("%f", &Q[i].solo);
        printf("Restinga: ");
        scanf("%f", &Q[i].restinga);
        printf("Aluvial: ");
        scanf("%f", &Q[i].aluvial);
        printf("Praia: ");
        scanf("%f", &Q[i].praia);
        printf("Urbana: ");
        scanf("%f", &Q[i].urbana);
        printf("Transicao: ");
        scanf("%f", &Q[i].transicao);
        printf("Alagado: ");
        scanf("%f", &Q[i].alagado);
        printf("Pinus: ");
        scanf("%f", &Q[i].pinus);
        printf("Dunas: ");
        scanf("%f", &Q[i].dunas);
        printf("\n");
}
}

void listar(int i){

    printf("\nDados do mes de vetor %d", i);
    printf("\nBanhado: %.2f%%", Q[i].banhado);
    printf("\nAgua: %.2f%%", Q[i].agua);
    printf("\nCampo: %.2f%%", Q[i].arroz);
    printf("\nCampo: %.2f%%", Q[i].solo);
    printf("\nCampo: %.2f%%", Q[i].restinga);
    printf("\nCampo: %.2f%%", Q[i].aluvial);
    printf("\nCampo: %.2f%%", Q[i].praia);
    printf("\nCampo: %.2f%%", Q[i].urbana);
    printf("\nCampo: %.2f%%", Q[i].transicao);
    printf("\nCampo: %.2f%%", Q[i].alagado);
    printf("\nCampo: %.2f%%", Q[i].pinus);
    printf("\nCampo: %.2f%%", Q[i].dunas);
    printf("\n");
}

float PERCENTUAL_MEDIO_ANTROPICO (int bimestre){
float media;
if(bimestre == 1){
media = ( (Q[0].campo + Q[0].arroz + Q[0].solo + Q[0].urbana + Q[0].transicao + Q[0].pinus) + (Q[1].campo + Q[1].arroz + Q[1].solo + Q[1].urbana + Q[1].transicao + Q[1].pinus))/12;
}

if(bimestre == 2){
media = ( (Q[2].campo + Q[2].arroz + Q[2].solo + Q[2].urbana + Q[2].transicao + Q[2].pinus) + (Q[3].campo + Q[3].arroz + Q[3].solo + Q[3].urbana + Q[3].transicao + Q[3].pinus))/12;
}

if(bimestre == 3){
media = ( (Q[4].campo + Q[4].arroz + Q[4].solo + Q[4].urbana + Q[4].transicao + Q[4].pinus) + (Q[5].campo + Q[5].arroz + Q[5].solo + Q[5].urbana + Q[5].transicao + Q[5].pinus))/12;
}

if(bimestre == 4){
media = ( (Q[6].campo + Q[6].arroz + Q[6].solo + Q[6].urbana + Q[6].transicao + Q[6].pinus) + (Q[7].campo + Q[7].arroz + Q[7].solo + Q[7].urbana + Q[7].transicao + Q[7].pinus))/12;
}

if(bimestre == 5){
media = ( (Q[8].campo + Q[8].arroz + Q[8].solo + Q[8].urbana + Q[8].transicao + Q[8].pinus) + (Q[9].campo + Q[9].arroz + Q[9].solo + Q[9].urbana + Q[9].transicao + Q[9].pinus))/12;
}

if(bimestre == 6){
media = ( (Q[10].campo + Q[10].arroz + Q[10].solo + Q[10].urbana + Q[10].transicao + Q[10].pinus) + (Q[11].campo + Q[11].arroz + Q[11].solo + Q[11].urbana + Q[11].transicao + Q[11].pinus))/12;
}


    return media;
}

void PERCENTUAL_AREA_URBANA (int *maior, int *menor){

int i, a, b;

*maior = Q[0].urbana;
    for (i=0; i<TAM; i++){
        if(Q[i].urbana > *maior){
            *maior = Q[i].urbana;
            a = i;
        }
    }
*menor = Q[0].urbana;
for (i=0; i<TAM; i++){
        if(Q[i].urbana < *menor){
            *menor = Q[i].urbana;
            b = i;
        }
    }

printf("Maior percentual de area urbana no mes de vetor %d sendo valor %d%%", a, *maior);
printf("\nMenor percentual de area urbana no mes de vetor %d sendo valor %d%%\n", b, *menor);
}

float CRESCIMENTO_ARROZ (int mes){
int soma;
if(mes == 1){
    soma = Q[0].agua + Q[0].urbana;
}
if(mes == 2){
    soma = Q[1].agua + Q[1].urbana;
}
if(mes == 3){
    soma = Q[2].agua + Q[2].urbana;
}
if(mes == 4){
    soma = Q[3].agua + Q[3].urbana;
}
if(mes == 5){
    soma = Q[4].agua + Q[4].urbana;
}
if(mes == 6){
    soma = Q[5].agua + Q[5].urbana;
}
if(mes == 7){
    soma = Q[6].agua + Q[6].urbana;
}
if(mes == 8){
    soma = Q[7].agua + Q[7].urbana;
}
if(mes == 9){
    soma = Q[8].agua + Q[8].urbana;
}
if(mes == 10){
    soma = Q[9].agua + Q[9].urbana;
}
if(mes == 11){
    soma = Q[10].agua + Q[10].urbana;
}
if(mes == 12){
    soma = Q[11].agua + Q[11].urbana;
}

return soma;
}
