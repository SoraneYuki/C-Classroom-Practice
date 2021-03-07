#include <stdio.h>

int main()
{

    int x = 500;
    
    printf("An int variable is declared with value 500 and it is allocated at memory address 0x%lx-0x%lx.\n",(unsigned long)(&x) ,(unsigned long)(&x) + sizeof(int) - 1);

}