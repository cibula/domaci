#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char imefajla1[44];
    char imefajla2[44];
    printf("Unesite nazive dva fajla\n");
    scanf("%s", imefajla1);
    scanf("%s", imefajla2);
    FILE *f1, *f2, *f;
    f1 = fopen(imefajla1, "r");
    f2 = fopen(imefajla2, "r");
    f = fopen("fajl3.txt", "w+");
    if (!f1)
    {
      return 0;
    }
    if (!f2)
    {
      return 0;
    }
    if (!f)
    {
       return 0;
    }
    char c;
    while(1) {
      c = fgetc(f1);
      if( feof(f1) ) {
         break ;
      }
      fputc(c,f);
   }
   while(1) {
      c = fgetc(f2);
      if( feof(f2) ) {
         break ;
      }
      fputc(c,f);
   }
   fclose(f);
    return 0;
}
