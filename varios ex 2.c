#include <stdio.h>
#include <math.h>

main (){

/* ex 1: ler e imprimir em ordem crescente
int i, j;
printf("i j: ");
scanf("%d %d", &i, &j);
if (i < j)
    printf("ordem: %d , %d", i, j);
else if (j < i)
    printf("ordem: %d , %d", j, i);
else
    printf("Os numeros sao iguais");
*/
/* ex 2: verificar se eh divisao exata
int i, j, r;
printf("i j: ");
scanf("%d %d", &i, &j);
r = i / j;
if (i % j == 0){
    printf("divisao exata\n");
    printf("%d / %d = %d com resto: %d", i, j, r, (i % j)); 
}
else{
    printf("divisao nao exata\n");
    printf("%d / %d = %d com resto: %d", i, j, r, (i % j)); 
}
*/
/* ex 3: ler nome e idade e imprimir o mais velho
char nome1[300];
char nome2[300];
int idade1, idade2;
printf("Nome: ");
scanf("%s", nome1);
printf("Idade: ");
scanf("%d", &idade1);
printf("Nome: ");
scanf("%s", nome2);
printf("Idade: ");
scanf("%d", &idade2);
if (idade2 < idade1)
    printf("O mais velho eh: %s e sua idade eh: %d", nome1, idade1);
else if (idade1 < idade2)
     printf("O mais velho eh: %s e sua idade eh: %d", nome2, idade2);
else
printf("%s e %s tem a mesma idade %d", nome1, nome2, idade2);
 */

/* ex 4: ler numero, se for positivo imprime sua metade, se for negativo imprime seu quadrado
int n, m, q;
printf("numero: ");
scanf("%d", &n);
if(n > 0){
    printf("eh positivo");
    m = n/2;
    printf("\nsua metade eh: %d", m);
   }
else if(n <= 1){
    printf("eh negativo");
    q = pow(n,2);
    printf("\nseu quadrado eh: %d", q);
}
*/

/* ex 5: calcular reajuste de salario
float atual, novo;
printf("Salario Atual\t\tAumento \n0 a 400,00\t\t15%% \n400,01 a 700,00\t\t12%% \n700,01 a 1.000,00\t10%%\n1.000,01 a 1.800,00\t7%% \n1.800,01 a 2.500,00\t4%% \nacima de 2.500,00\tSem aumento");
printf("\nDigite seu salario: ");
scanf("%f", &atual);
if (atual > 0 && atual < 400)
{
    novo = atual*1.15;
    printf("O salario com reajuste ficara %.2f", novo);
}
if (atual > 400 && atual < 700)
{
    novo = atual*1.12;
    printf("O salario com reajuste ficara %.2f", novo);
}
if (atual > 700 && atual < 1000)
{
    novo = atual*1.10;
    printf("O salario com reajuste ficara %.2f", novo);
}
if (atual > 1000 && atual < 1800)
{
    novo = atual*1.07;
    printf("O salario com reajuste ficara %.2f", novo);
}
if (atual > 1800 && atual < 2500)
{
    novo = atual*1.04;
    printf("O salario com reajuste ficara %.2f", novo);
}
if (atual > 2500)
{
    printf("Nao havera reajuste");
}
*/
/* ex 6: ver se n esta entre dois numeros
int n;
scanf("%d", &n);
if(n >= 20 && n <= 90)
printf ("%d esta entre 20 e 90", n);
else
printf ("%d nao esta entre 20 e 90", n);
*/ 

/* ex 7: contar quantos pares/impares foram lidos
int a, b, c, d, p=0, i=0;
scanf("%d %d %d %d", &a, &b, &c, &d);
if (a % 2 == 0){
p++;
}
else{
i++;
}
if (b % 2 == 0){
p++;
}
else{
i++;
}
if (c % 2 == 0){
p++;
}
else{
i++;
}
if (d % 2 == 0){
p++;
}
else{
i++;
}
printf("par: %d\nimpar: %d", p, i);
*/

/* ex 8: escolher forma de pagamento e imprimir preço final
float p;
int f;

scanf("%d", &f);
scanf("%f", &p);

switch (f)
{
case 1:
    printf("A vista em dinheiro ou cheque");
    printf("\nTotal: %.2f", p*0.9);
    break;
case 2:
    printf("A vista com cartao de credito");
    printf("\nTotal: %.2f", p*0.95);
    break;
case 3:
    printf("Parcelado em 2 vezes sem juros");
    printf("\nTotal: %.2f, sendo %.2f por mes", p, p/2);
    break;
case 4:
    printf("Parcelado em 3 vezes com juros");
    printf("\nTotal: %.2f, sendo %.2f por mes", p*1.10, (p*1.10)/3);
    break;
default:
    break;
}

*/

return 0;
}