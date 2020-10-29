#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char c, *ptr;
    printf("Uneti velicinu stringa: ");
    scanf("%d", &n);
    ptr = (char*) malloc(n * sizeof(char));
    printf("Uneti string: ");
    scanf("%s", ptr);
    for(int i=0; i < n; i++){
        c = *(ptr + i);
        if(c >= 'a' && c <= 'z')
            c -= 32;
        printf("%c", c);
    }
    return 0;
}
