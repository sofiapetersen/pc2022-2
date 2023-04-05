#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100

typedef struct{
    int dia;
    int mes;
    int ano;
} data;

struct cd{
    char nome[100];
    data lancamento;
    float valor;
    char gravadora[100];
} info[TAM];

void criar();
void listar();
void apagar(int reg);
void criar_lista();
int livre();
void busca_nome (char *nome_buscado);
int busca_apaga(char *nome_buscado);

int main(){
    int opcao, i, posicao, registro;
    char nome[100];
do{
printf("\nMENU\n");
printf("1- Registrar\n2- Listar\n3- Buscar\n4- Apagar\n5- Apagar Registro\n6- Sair");
printf("\nEscolha uma opcao: ");
scanf("%d", &opcao);
getchar();

switch(opcao){
    case 1:
    criar();
    break;
    
    case 2:
    for(i=0; i<TAM; i++){
    if(info[i].nome[0] != '\0'){
       listar(i);
      }
    }
    break;

    case 3:
    printf("Buscar: ");
    scanf("%[^\n]s", nome);
    busca_nome (nome);
    break;

    case 4:
    printf("Apagar: ");
    scanf("%[^\n]s", nome);
    posicao = busca_apaga(nome);
    if (posicao != -1){
    apagar(posicao);
    printf("Nome apagado");
    }
    else
    printf("Nome inexistente");
    break;

    case 5:
    printf("Apagar registro: ");
    scanf("%d", &registro);
    apagar(registro);
    printf("\nRegistro apagado");
    break;

    case 6:
    break;

}
printf("\n");
} while (opcao != 6);
return 0;
}

void criar(){
    int i;

    i = livre();
    if (i == -1){
        printf("Armazenamento cheio");
        return;
    }
    else{
    printf("Complete os dados do disco:\n");
    printf("Nome: ");
    scanf("%[^\n]s", &info[i].nome);
    getchar();
    printf("Gravadora: ");
    scanf("%[^\n]s", &info[i].gravadora);
    getchar();
    printf("Valor: ");
    scanf("%f", &info[i].valor);
    printf("Lancamento\n");
    printf("Dia: ");
    scanf("%d", &info[i].lancamento.dia);
    printf("Mes: ");
    scanf("%d", &info[i].lancamento.mes);
    printf("Ano: ");
    scanf("%d", &info[i].lancamento.ano);
 }
 }
int livre(){
    int i;
    for (i=0; info[i].nome[0] && i < TAM; i++){
        if (i == TAM)
        return -1;
    }
    return i;
}

void listar(int i){
    printf("\nDados do disco %d", i);
    printf("\nNome: %s", info[i].nome);
    printf("\nGravadora: %s", info[i].gravadora);
    printf("\nValor: %.2f", info[i].valor);
    printf("\nLancamento: %d/%d/%d", info[i].lancamento.dia, info[i].lancamento.mes, info[i].lancamento.ano);
    printf("\nRegistro: %d", i);
    printf("\n");
}

void busca_nome (char *nome_buscado){

int i;

for (i = 0; i < TAM; i++){
  if ((strstr(info[i].nome, nome_buscado)) != '\0'){
  listar(i);}
}

}

int busca_apaga(char *nome_buscado){
    int i;

    for(i=0; i<TAM; i++){
        if((strcmp(nome_buscado, info[i].nome)) == 0){
            return i;
        }
    }
    return -1;
}

void apagar(int reg){

    if (reg >= 0 && reg <TAM){
    info[reg].nome[0] = '\0';
    }

}