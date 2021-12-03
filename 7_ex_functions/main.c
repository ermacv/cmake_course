#include <stdio.h>
#include "header_version.h"

int main(void)
{
    printf("Hello World!. Executable version: %d.%d\r\n", EXAMPLE_VERSION_MAJOR, EXAMPLE_VERSION_MINOR);
    return 0;
}