#include <stdio.h>

#define showValue_double(input) \
showValueFunc_double(#input"=%.4f\n" , input)

#define showValue_char(input) \
showValueFunc_int(#input"=%c\n" , input)

#define showValue_float(input) \
showValueFunc_int(#input"=%f\n" , input)

#define showValue_int(input) \
showValueFunc_int(#input"=%d\n" , input)

#define GenerateShowValueFunc(type) \
void showValueFunc_##type(char format[], type input)\
{\
    printf(format, input); \
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