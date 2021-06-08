#include <stdio.h>

void double_show (double d)
{
  printf("%f\n", d);
}

void int_show (int i)
{
  printf("%d\n", i);
}

#define show(x) _Generic((x),\
  double: double_show,       \
  int:    int_show) (x) // the x here is the parameter passed to the function

int main()
{
  double i = 5.2;
  int j = 3;

  show(i);
  show(j);
}