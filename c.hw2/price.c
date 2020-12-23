#include <stdio.h>

int main()
{

    int price, quantity;

    printf("Please input the price: ");
    scanf("%d", &price);
    
    printf("Please input the quantity: ");
    scanf("%d", &quantity);

    printf("The total price is %d.\n", price * quantity);

}