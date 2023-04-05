#include <stdio.h>
#include <math.h>

int main(){

/* ex 1: menu com do while
int i, j, menu;
scanf("%d", &i);
scanf("%d", &j);
do{
printf("\nEscolha uma opcao do menu:\n");
printf("1 - Soma dos dois numeros;\n2 - Subtracao dos dois numeros;\n3 - Multiplicacao dos dois numeros;\n4 - Divisao dos dois numeros;\n0- sair\n");
scanf("%d", &menu);
switch(menu){
    case (1):
        printf("Soma: %d\n", i+j);
        break;
    case (2):
        printf("Subtracao: %d\n", i-j);
        break;
    case (3):
        printf("Multiplicacao: %d\n", i*j);
        break;
    case (4):
        printf("Divisao: %d\n", i/j);
        break;
    case (0):
        printf("Operacao finalizada");
        break;
    default:
        printf("Operacao invalida\n");
        break;
}
}while(menu!=0);
*/

/* ex 2: calcular area do circulo durante while
float a, r=1, pi=3.14;
printf("\nCaso deseje finalizar a operacao digite 0\n");
while (r!=0)
{
    printf("\nRaio: ");
    scanf("%f", &r);
    a=pi*(pow(r,2));
    printf("Area: %.2f", a);

}
printf("\n\nOperacao finalizada");
*/

 //ex 3: sequencia de fibonacci
int t1=0, t2=1, r, c=0;
printf("Sequencia de Fibonacci\n");
printf("Termo %d\n", t1);
printf("Deseja continuar a sequencia?\n0 - sim\nOutro digito - nao\n");
scanf("%d", &c);
if (c==0){
    printf("Termo %d\n", t2); }
else{
    printf("\nSequencia finalizada\n");}
printf("Deseja continuar a sequencia?\n0 - sim\nOutro digito - nao\n");
scanf("%d", &c);
if (c==0)
{
    while (c==0)
    {
        r = t1 + t2;
        printf("Termo %d\n", r);
        printf("Deseja continuar a sequencia?\n0 - sim\nOutro digito - nao\n");
        scanf("%d", &c);
        t1 = t2;
        t2 = r;
    }
}
printf("\nSequencia finalizada\n");

/* ex 4: ler votos e imprimir quantos de cada
int v=7, c1=0, c2=0, c3=0, c4=0, vn=0;
while (v!=0)
{
    printf("\n 1- Sofia\n 2- Carolina\n 3- Nicole\n 4- Isabela\n 5- Voto Nulo\n 0- Encerrar votacao");
    printf("\nSeu voto: ");
    scanf("%d", &v);
    switch (v)
    {
    case 1:
        c1++;
        printf("Voto registrado: SOFIA");
        break;
    case 2:
        c2++;
        printf("Voto registrado: CAROLINA");
        break;
    case 3:
        c3++;
        printf("Voto registrado: NICOLE");
        break;
    case 4:
        c4++;
        printf("Voto registrado: ISABELA");
        break;
    case 5:
        vn++;
        printf("Voto registrado: NULO");
        break;
    case 0:
    default:
        printf("Votacao Encerrada");
        break;
    }
}
printf("\nTotal de votos: %d", c1+c2+c3+c4+vn);
printf("\nTotal de votos por pessoa:\nSofia: %d\nCarolina: %d\nNicole: %d\nIsabela: %d\nNulo: %d\n", c1, c2, c3, c4, vn);
*/

/* ex 5: ler varios preços de varios produtos, ler forma de pagamento e imprirmir valor final
float v=1, vt=0;
int p;
while(v!=0){
    printf("Digite o valor do produto ou 0 parar fechar o carrinho de compras: ");
    scanf("%f", &v);
    vt=v+vt; }
printf("\nCarrinho de compras fechado, prosseguir para forma de pagamento!");

printf("\n\nForma de pagamento:\n1 - A vista em dinheiro ou cheque, com 10%% de desconto\n2- A vista com cartao de credito, com 5%% de desconto\n3- Em 2 vezes, preco normal de etiqueta sem juros\n4- Em 3 vezes, preco de etiqueta com acrescimo de 10%%\n0- Encerrar compra\n");
scanf("%d", &p);
switch (p)
{
case 1:
    printf("\nA vista em dinheiro ou cheque, com 10%% de desconto");
    printf("\nSubtotal: %.2f", vt);
    printf("\nValor total: R$%.2f", vt*0.90);
    break;
case 2:
    printf("\nA vista com cartao de credito, com 5%% de desconto");
    printf("\nSubtotal: %.2f", vt);
    printf("\nValor total: R$%.2f", vt*0.95);
    break;
case 3:
    printf("\nEm 2 vezes, preco normal de etiqueta sem juros");
    printf("\nSubtotal: %.2f", vt);
    printf("\nValor total: R$%.2f , sendo cada parcela de R$%.2f", vt, (vt/2));
    break;
case 4:
    printf("\nEm 3 vezes, preco de etiqueta com acrescimo de 10%%");
    printf("\nSubtotal: %.2f", vt);
    printf("\nValor total: R$%.2f, sendo cada parcela de R$%.2f", vt*1.10, (vt*1.10)/3);
    break;
default:
    break;
}
printf("\n\nCompra finalizada");
*/
    return 0;
}