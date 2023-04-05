#include <stdio.h>
#include <math.h>

#define MAXESCOLAS 5
#define MAXESTUDANTES 10

typedef struct {
int x;
int y;
} coord;

typedef struct {
coord local;
float raio;
int capac;
} escola;

typedef struct {
coord local;
} estudante;

escola listaescolas[MAXESCOLAS];

estudante listaestudantes[MAXESTUDANTES];

void questao01(int *qesc, int *qest);
escola questao02(int qesc);
void questao03(escola x);
void questao04(int qesc, int qest);

int main()
{
int qtde_esc, qtde_est;
questao01(&qtde_esc, &qtde_est);
questao03(questao02(qtde_esc));
questao04(qtde_esc, qtde_est);
return 0;
}

void questao01(int *qesc, int *qest){

int i;

printf("Quantidade de escolas: ");
scanf("%d", qesc);

printf("\n");

if (*qesc <= MAXESCOLAS){
    for (i=0; i<*qesc; i++){
        printf("\nEscola %d\n", i);
        printf("Coordenada x: ");
        scanf("%d", &listaescolas[i].local.x);
        printf("Coordenada y: ");
        scanf("%d", &listaescolas[i].local.y);
        printf("Raio: ");
        scanf("%f", &listaescolas[i].raio);
        printf("Capacidade: ");
        scanf("%d", &listaescolas[i].capac);
    }
}

printf("\nQuantidade de estudantes: ");
scanf("%d", qest);


if (*qest <= MAXESTUDANTES){
    for (i=0; i<*qest; i++){
        printf("\nEstudante %d\n", i);
        printf("Coordenada x: ");
        scanf("%d", &listaestudantes[i].local.x);
        printf("Coordenada y: ");
        scanf("%d", &listaestudantes[i].local.y);
    }
}
}

escola questao02(int qesc){
int i, j=0;
    for (i=0; i<qesc; i++){
        if(listaescolas[i].raio > listaescolas[j].raio){
            j = i;
        }
    }
    return listaescolas[j];
}

void questao03(escola x){

    printf("\nA escola com maior raio:\n");
    printf("Coordenada x: %d\n", x.local.x);
    printf("Coordenada y: %d\n", x.local.y);
    printf("Raio: %.2f\n", x.raio);
    printf("Capacidade: %d\n", x.capac);
    printf("\n");

}

void questao04(int qesc, int qest){

int dentro, i, j, r;

for(i=0; i<qest; i++){
    dentro=-1;      //começa como se o estudante nao estivesse em nenhuma escola
    printf("Aluno %d abrigado por: ", i);
    for (j=0; j<qesc; j++){
        r = sqrt(pow((listaestudantes[i].local.x - listaescolas[j].local.x), 2) + pow((listaestudantes[i].local.y - listaescolas[j].local.y),2));
        if (r < listaescolas[j].raio){
            printf("%d ", j);
            dentro = 0;     // se cair nesse if, ou seja, o estudante tá em uma escola ele muda pra 0 nesse momento e contabiliza a escola
        }
    }
    if (dentro==-1){        //se continuou -1 eh pq o estudante nao ta em nenhuma escola
        printf("-1");
    }
    printf("\n");
}

}