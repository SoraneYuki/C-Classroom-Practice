#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char s[] = "Self-trust is the first secret of success. secret";
    char t[] = "secret";
    char *test;
    
    int i;

    test = strstr(s, t);
    printf("%s\n", test);
    printf("%p\n", test);
    printf("%c\n", s[1]);

    for(i = 0; i < 6; i++)
    {

      printf("%c ", t[i]);

    }

    printf("\n");
     
    return 0;    
}