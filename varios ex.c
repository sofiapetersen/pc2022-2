#include <stdio.h>
#include <math.h>

int main (){

/* ex 1: fazer a media dos 4 numeros
int a=10, b=20, c=30, d=40;
float media;
media = (a + b + c + d) / 4;
printf("%.2f", media);
*/
/* ex 2: calcular area da circunferencia de r=6, formula piR^2
float pi=3.14, r=6, a, c;
int e=2;
a = (pow(r,e))*pi;
c = 2*pi*r;
printf("%.2f", a);
printf("\n%.2f", c);
*/
/* ex 3: media ponderada -> a peso 2, b peso 3, c peso 5
float a=6.8, b=5.5, c=8.3, m;

m = ((a*2)+(b*3)+(c*5))/10;
printf("%.2f", m);
*/
/* ex 4: ler numero e mostrar tabuada
int n;
printf("Numero: ");
scanf("%d", &n);
printf("Tabuada:\n");
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", n*1, n*2,n*3,n*4,n*5,n*6,n*7,n*8,n*9,n*10);
*/
/* ex 5: ler as horas e mostrar em minutos
int h, m, mT;
printf("Horario 'hora minutos': ");
scanf("%d %d", &h, &m);
mT = (h*60)+m;
printf("Em minutos: %d", mT);
*/
/* ex 6: ler cotacao do dolar e converter
float c, d, r;
printf("Cotacao: ");
scanf("%f", &c);
printf("Quantidade de dolares: ");
scanf("%f", &d);
r = d*c;
printf("Os %.2f dolares rendem %.2f reais", d, r);
*/


    return 0;
}