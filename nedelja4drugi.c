#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i, c=0;
    printf("Uneti broj elemenata: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    printf("Uneti elemente: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    for(i = 0; i < n; i++)
    {
        c=c+*(ptr+i);
    }
    printf("%d", c/n);
    return 0;
}
