#include <stdio.h>
#include <math.h>

main(){
/*ex 1: imprimir multiplos de 5 entre 1 a 500
int n;
for(n=0; n<=500; n=n+5){
    printf("\n%d", n);
}
*/

/*ex 2: imprimir multiplos de 4 entre 5 a 87
int n;
for(n=5; n<=87; n++){
    if (n%4==0) {
    printf ("\n%d", n); }
}
*/

/*ex 3: ler numero e imprimir somatorio e media
int i, n;
float s=0;

for(i=0;i<10;i++){
    printf("Valor: ");
    scanf("%d", &n);
    s=s+n;
}
printf("Somatorio: %.0f\n", s);
printf("Media: %.2f", s/10);
*/

/*ex 4: imprimir quadrado de uma serie de numeros
int n, i;
scanf("%d", &n);
for (i=1; i <= n; i++)
{
    printf("Quadrado do numero %d eh: %d\n", i, i*i);
}
*/
/* ex 5: ler numero N e imprimir a tabuada do numero até N
int n, i;
scanf("%d", &n);
printf("Tabuada do numero %d\n", n);
for (i=1; i <= n; i++)
{
    printf("%d\n", i*n);
}
*/

/* ex 6: media de 3 notas entre 25 alunos
int a;
float n1, n2, n3, m;
for (a = 1; a <=25; a++)
{
    printf ("Nota 1: ");
    scanf("%f", &n1);
    printf ("Nota 2: ");
    scanf("%f", &n2);
    printf ("Nota 3: ");
    scanf("%f", &n3);
    m = (n1+n2+n3)/3;
    printf("Media do aluno %d: %.2f\n", a, m);
    if(m >= 7)
        printf("\nAluno aprovado!\n");
    else if (m >= 3 && m < 7)
        printf("\nAluno em exame!\n");
    else
        printf("\nAluno reprovado!\n");
}
*/

/* ex 7: ler 10 numeros e contar quantos sao neg e positivos
int i, v, p=0, n=0;
for (i = 0; i < 10; i++)
{
    printf("digite os numeros: ");
    scanf("%d", &v);
    if (v > 0)
    p = p+1;
    else
    n = n+1;
}
printf("Total de positivos: %d\n", p);
printf("Total de negativos: %d", n);
*/

/* ex8: fazer fatorial de n
int i, f, n;
printf("numero: ");
scanf("%d", &n);
f=1;
i=n;
while (i > 0)
{
    f=f*i;
    i--;
}
printf("fatorial de %d eh: %d", n, f);
*/

/* ex 9: conferir se eh primo
int n, i=1, r=0;
printf("numero: ");
scanf("%d", &n);
while (i <=n)
{
    if(n%i==0)
        r=r+1;
    else {}
    i=i+1;
}
if(r==2)
    printf("Numero %d eh primo", n); 
else if (r!=2)
    printf("Numero %d nao eh primo", n);
*/


/* ex 10: ler nome do funcionario e salario bruto, calcular salario liquido e imprimir
char nome[50];
float i=0, sb, sl;
while(i<5){
printf("\nNome: ");
scanf("%s", &nome);
printf("Salario bruto: ");
scanf("%f", &sb);
if (sb <= 3000){
    sl = sb*0.77;
}
else if(sb > 3000 && sb <= 4500){
    sl = sb*0.71;
}
else if(sb > 4500){
    sl = sb*0.65;
}
    printf("Salario liquido de %s eh: %.2f\n", nome, sl);
i++;
}
*/

/* ex 11: contar quantos sao par, impar, negativo, positivo
int n, i=0, p=0, po=0, ne=0;
printf("Para ver o total digite 0\n");
while (n!=0) {
    printf("\nNumero: ");
    scanf("%d", &n);
    if (n%2==0 && n!=0){
        p++; }
    else if(n%2!=0)
        i++;
    
    if(n>0)
        po++;
    else if(n<0)
        ne++;
}
printf("Pares: %d\nImpares: %d\nPositivos: %d\nNegativos: %d", p, i, po, ne);
*/

    return 0;
}