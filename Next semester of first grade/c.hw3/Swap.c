#include <stdio.h>

void show2Numbers(int a, int b)
{

    printf("%d, %d\n", a, b);

}

void *swap(int *a, int *b)
{

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{

    int x, y;

    printf("Please input two numbers: ");
    scanf(" %d %d", &x, &y);
    show2Numbers(x, y);
    swap(&x, &y);
    show2Numbers(x, y);

}