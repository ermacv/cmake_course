#include <stdio.h>

int main(void)
{
    printf("Hello World!\r\n");
#ifdef SOME_DEFINITION
    printf("SOME_DEFINITION is defined\r\n");
#else
    printf("SOME_DEFINITION is not defined\r\n");
#endif
    return 0;
}