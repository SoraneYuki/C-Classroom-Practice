#include <stdio.h>

#define GenerateShowValueFunc(type)\
type showValue_##type(type x)\
{\
    sizeof(type) == 4 ? printf("j=%d\n", x) : printf("i=%.4f\n", x);\
}

GenerateShowValueFunc(double)
GenerateShowValueFunc(int)

int main()
{

    double i = 5.2;
    int j = 3;

    showValue_double(i);
    showValue_int(j);

}