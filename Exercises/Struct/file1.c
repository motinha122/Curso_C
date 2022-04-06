#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct componente
{
    char tipo[20];
    char referencia[4];
    int numero_referencia;
    int valor;
    char unidade[10];
}; // Struct is a declaration ' ; ' is needed

struct componente comp;

int main()
{
    printf("Tipo de componente: ");
    fgets(comp.tipo,20,stdin);
    printf("Referencia do componente: ");
    scanf("%s",comp.referencia);
    printf("Número da referencia: ");
    scanf("%d",&comp.numero_referencia);
    printf("Valor do componente: ");
    scanf("%d",&comp.valor);
    printf("Unidade: ");
    scanf("%s",comp.unidade);

    printf("\n===Componente criado===\n%s",comp.tipo);
    printf("%s\n",comp.referencia);
    printf("%d\n",comp.numero_referencia);
    printf("Valor: %d",comp.valor);
    printf("%s\n",comp.unidade);

    system("pause");
    return 0;
}