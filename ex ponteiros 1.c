#include <stdio.h>

void DescobrirValores(int *v, int *me, int *ma, int TAM);


int main () {

    int valor = 10, vet[] = {50, 10, 250, 500, 25}, menor, maior;
    int *p;

    p = &valor;

    printf ("Endereco de valor: %p\n", &valor);
    printf("Endereco de p: %p\n", &p);
    printf("Conteudo de p: %p\n", p);
    printf("Conteudo apontado por p: %d\n", *p);

    DescobrirValores(vet, &menor, &maior, 5);
    printf("Na main:\nMenor: %d\t Maior: %d\n", menor, maior);
    printf ("Na main\nEndereco de menor: %p\nEndereco de maior: %p", &menor, &maior);
return 0;
}

void DescobrirValores(int *v, int *me, int *ma, int TAM){
    int i;
    *me = v[0];
    *ma = v[0];

    for(i = 1; i < TAM; i++){
        if(v[i] < *me)
            *me = v[i];
        if (v[i] > *ma)
            *ma = v[i];
    }
    printf("Na funcao:\nMenor: %d\t Maior: %d\n", *me, *ma);
    printf ("Na funcao:\nEndereco de me: %p\nEndereco de ma: %p\n", &me, &ma);
    printf ("Na funcao:\nConteudo de me: %p\nConteudo de ma: %p\n", me, ma);
}