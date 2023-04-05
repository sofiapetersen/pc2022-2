#include <stdio.h>

int main(){

int n, x, i, aux;

printf("tamanho vetor: ");
scanf("%d", &n);

int v[n];

for(i=0;i<n;i++){
    printf("numero: ");
    scanf("%d", &v[i]);
}

for(i=0;i<n;i++){
    printf("\n%d", v[i]);
}


printf("\n");

for(i=0;i<n;i++){
    for(x=i+1;x<n;x++){
        if(v[i]>v[x]){
            aux=v[i];
            v[i]=v[x];
            v[x]=aux;
        }
        else{}

    }
}

for(i=0;i<n;i++){
    printf("\n%d", v[i]);
}

    return 0;
}