#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;
    char tekst[100];
    printf("Uneti string: ");
    gets(tekst);
    f = fopen("primer.txt","w+");
    int i;
    for(i=0; i<strlen(tekst); i++){
        fputc(tekst[i], f);
    }
    fclose(f);
    char c;
    int br=0;
    printf("Uneti neki znak: ");
    scanf("%c", &c);
    f = fopen("primer.txt", "r");
    while(1) {
        if(c==fgetc(f)){
            br++;
        }if(feof(f)){
            break;
        }
    }printf("%d", br);
    return 0;
}
