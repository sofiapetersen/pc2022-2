//Desafio 3 - Sofia Petersen

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cel {
	char nome[100];
    double preco;
    int id;
	struct cel *prox;
};

typedef struct cel celula;
celula *cria(void);
void insere(char x[100], double y, int z, celula * p);
void imprime(celula * ini);
void remova(int y, celula * ini);
celula *apaga(celula *ini);
int comparar(double preco_alto, celula *p);
void insere_fim(char nome[100], double preco, int ID, celula *p_ini);
void insere_ordem(char nome[100], double preco_ordem, int ID, celula *p_ini);
void carrega_lista(celula *p_ini);
void salva_arquivo(celula *p_ini);


int main(){

int menu, id;
char nome[100];
double preco;

    
    celula *ini; //*pos;
	ini = cria();
for(;;){
    printf("\n1- Adicionar Produto\n2- Remover Produto\n3- Imprimir Lista\n4- Carregar lista do arquivo produtos.bin\n5- Salvar lista atual no arquivo produtos.bin\n6- Sair\nEscolha um opcao: ");
    scanf("%d", &menu);
    getchar();
    switch (menu)
    {
    case 1:
        printf("\nNome: ");
        scanf("%[^\n]s", nome);
        getchar();
        printf("Preco: ");
        scanf("%lf", &preco);
        printf("ID: ");
        scanf("%d", &id);
        if(ini->prox == NULL){
        insere(nome, preco, id, ini);
        }
        else if(comparar(preco, ini) == 1){
            insere_fim(nome, preco, id, ini);
        }
        else{
            insere_ordem(nome, preco, id, ini);
        }
        break;
    case 2:
    printf("Remover ID: ");
    scanf("%d", &id);
    remova(id, ini);
        break;
    case 3:
        printf("\nProdutos cadastrados:\n");
        imprime(ini);
        break;
    case 4:
        if(ini != NULL){
            ini = apaga(ini);
            ini = cria();
        }
        carrega_lista(ini);
        imprime(ini);       //eu ainda tenho dificuldade pra entender esse .bin, quando eu imprimo 
                            //ele aparece uma celula com todos as structs 0, tentei procurar como resolver
                            //isso e nao consegui
        break;
    case 5:
        salva_arquivo(ini);
        break;
    case 6:
    remove("produtos.bin");
    apaga(ini);
    exit(0);
    }
}
}

celula *cria(void)
{
	celula *start;

	start = (celula *) malloc(sizeof(celula));
	start->prox = NULL;
	return start;
}

void insere(char x[100], double y, int z, celula * p)
{
	celula *nova;

	nova = (celula *) malloc(sizeof(celula));
	strcpy(nova->nome,x);
    nova->preco = y;
    nova->id = z;
	nova->prox = p->prox;
	p->prox = nova;
}

void imprime(celula * ini)
{
	celula *p;
	for (p = ini->prox; p != NULL; p = p->prox){
		printf("\nNome: %s\n", p->nome);
        printf("Preco: %lf\n", p->preco);
        printf("ID: %d\n", p->id);
    }

}

void remova(int y, celula * ini)
{
	celula *p, *q;
	p = ini;
	q = ini->prox;
	while ((q != NULL) && (q->id != y)) {
		p = q;
		q = q->prox;
	}
	if (q != NULL) {
		p->prox = q->prox;
		free(q);
	}
    else{
        printf("Produto nao encontrado\n");
    }
}

celula *apaga(celula *ini)
{

celula *p = ini, *temp = NULL;
while (p != NULL){
    temp = p->prox;
    free(p);

    p = temp;
}
    return NULL;
}

int comparar(double preco_alto, celula *p_ini)
{
    celula *p;
    for(p = p_ini; p->prox != NULL; p = p->prox);
    if(preco_alto > p->preco){
        return 1;
    }
    else{
        return 0;
    }
}

void insere_fim(char nome[100], double preco, int ID, celula *p_ini)
{
    celula *p;
    for(p = p_ini; p->prox != NULL; p = p->prox);
    insere(nome, preco, ID, p);
}

void insere_ordem(char nome[100], double preco_ordem, int ID, celula *p_ini)
{
    celula *p;
    for(p = p_ini; p->prox->preco < preco_ordem; p = p->prox);
    insere(nome, preco_ordem, ID, p);
}


void carrega_lista(celula *p_ini)
{
    FILE *produtos = fopen("produtos.bin", "rb");
    celula temp;

    if(produtos == NULL){
        printf("Erro ao abrir o arquivo .bin");
        return;
    }

    while(fread(&temp, sizeof(celula), 1, produtos)){
        if(p_ini->prox == NULL){
            insere(temp.nome, temp.preco, temp.id, p_ini);
        }
        else if(comparar(temp.preco, p_ini) == 1){
            insere_fim(temp.nome, temp.preco, temp.id, p_ini);
        }
        else
            insere_ordem(temp.nome, temp.preco, temp.id, p_ini);
    }
    fclose(produtos);

}


void salva_arquivo(celula *p_ini)
{
   FILE *produtos = fopen("produtos.bin", "wb");
    celula *p;

    for(p = p_ini; p != NULL; p = p->prox){
        fwrite(p, sizeof(celula), 1, produtos);
    }

    fclose(produtos);


}