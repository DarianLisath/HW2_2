#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("x = 10, y = 5");
    int x = 10, y = 5;
    scanf("%d", &x);
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nafter Swapping: x = %d, y = %d", x, y);
    return 0;
}
