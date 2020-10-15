#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;
    char string[100];
    printf("Uneti ime, prezime i broj u dnevniku: ");
    gets(string);
    f = fopen("primer2.txt","w+");
    int i;
    for(i=0; i<strlen(string); i++){
        fputc(string[i], f);
    }
    fclose(f);
    return 0;
}
