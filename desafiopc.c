#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double somar(double num1, double num2);
double subtrair(double num1, double num2);
double dividir(double num1, double num2);
double multiplicar(double num1, double num2);
long fatorial(double num);

int main () {
  int op;
  double x, y, r;
  long re;

  do{
    printf("MENU\n");
    printf("1- Somar\n2- Subtrair\n3- Dividir\n4- Multiplicar\n5- Fatorial\n6- Sair");
    printf("\nEscolha uma opcao: ");
    scanf("%d", &op);

    switch(op){
      case 1: 
        printf("Numero 1: ");
        scanf("%lf", &x);
        printf("Numero 2: ");
        scanf("%lf", &y);
        r = somar(x, y);
        printf("Resultado: %lf", r);
        break;

      case 2:
        printf("Numero 1: ");
        scanf("%lf", &x);
        printf("Numero 2: ");
        scanf("%lf", &y);
        r = subtrair(x, y);
        printf("Resultado: %lf", r);
        break;

      case 3:
        printf("Numero 1: ");
        scanf("%lf", &x);
        printf("Numero 2: ");
        scanf("%lf", &y);
        r = dividir(x, y);
        printf("Resultado: %lf", r);
        break;

      case 4:
        printf("Numero 1: ");
        scanf("%lf", &x);
        printf("Numero 2: ");
        scanf("%lf", &y);
        r = multiplicar(x, y);
        printf("Resultado: %lf", r);
        break;
        
      case 5:
        printf("Numero: ");
        scanf("%lf", &x);
        re = fatorial(x);
        printf("Resultado: %ld", re);
        break;

      case 6:
        break;
    }
    printf("\n\n"); // Espaço entre os menus

  } while (op !=6);

  return 0;
}

double somar(double num1, double num2){
  return (num1+num2);
}

double subtrair(double num1, double num2){
  return num1-num2;
}

double dividir(double num1, double num2){
  while (num2==0){
    printf("Nao e possivel divisao por 0\n");
    printf("Numero 2: ");
    scanf("%lf", &num2);
  }

  return (num1/num2);
}

double multiplicar(double num1, double num2){
  return num1*num2;
}

long fatorial(double num){
  while (num<0){
    printf("Nao e possivel calcular numero negativo\n");
    printf("Numero: ");
    scanf("%lf", &num);
  }
  
  num = round(num);

  if ((num==0)||(num==1)){
    return 1;
  }

  return num*fatorial(num-1);
}