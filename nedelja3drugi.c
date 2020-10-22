#include <stdio.h>
#include <stdlib.h>
#define MAX 256
    struct struktura {
        int gosti;
        char pica[20];
        int apetit;
    };

int main()
{
    FILE *f;
    struct struktura niz[1];
    printf("Uneti broj gostiju: ");
    scanf("%d", niz[0].gosti);
    printf("Uneti ime pice: ");
    scanf("%s", niz[0].pica);
    printf("Uneti prosecan apetit gostiju: ");
    scanf("%d", niz[0].apetit);
    if(niz[0].gosti < 0){
        printf("Ne moze biti manje od nula gostiju, uneti ponovo: ");
        scanf("%d", niz[0].gosti);
    }
    if(niz[0].apetit < 0){
        printf("Apetit ne moze biti negativan, uneti ponovo: ");
        scanf("%d", niz[0].apetit);
    }
    int i;
    i=niz[0].apetit/8;
    f = fopen("primer.txt", "w+");
    fputc(i, f);
    fputc(i*8, f);
    fputc(niz[0].pica, f);
    fclose(f);
    return 0;
}
