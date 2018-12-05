#include <stdio.h>

int main()
{
    int b = 99;

    while(b > 1)
    {
        printf("%d bottles of beer on the wall,\n",b);
        printf("%d bottles of beer!\n",b);
        printf("You take one down, pass it around,\n");
        b--;
        printf("%d bottles of beer on the wall!\n\n",b);
    }
    printf("%d bottle of beer on the wall,\n",b);
    printf("%d bottle of beer!\n",b);
    printf("You take it down, pass it around,\n");
    printf("No more bottles of beer!\n\n");

    return(0);
}
