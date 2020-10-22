#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f, *fp;
    f = fopen("primer.txt", "r");
    fp = fopen("privremeni fajl.txt", "w+");
    char c;
    while(1){
        c = fgetc(f);
        if( feof(f) ){
            break;
        }
        if(c >= 'a' && c <= 'z')
            c -= 32;
        fputc(c, fp);
    }
    fclose(f);
    fclose(fp);
    remove("primer.txt");
    rename("privremeni fajl.txt", "primer.txt");
    return 0;
}
