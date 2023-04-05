#include <stdio.h>

int main()
{
int i, j;
char filme[500];

printf("Escolha 2 filmes em cada ano 2017, 2018, 2019 respectivamente\n");

for (i = 2017; i <= 2019; i++)
{
    printf("Digite os filmes do ano %d:\n", i);
    for (j = 1; j <= 2; j++)
    {
        printf("Filme %d: ", j);
        fgets(filme,500,stdin);
        printf ("Filme digitado: %s", filme);
    }
    
    printf("2 Filmes digitados para este ano\n\n");
}

	return 0;
}
