#include "print.h"
#include <stdio.h>
#include "print_config.h"

void print_string(const char *str)
{
    printf(kPRINT_CFG_STR_PREFIX "%s" kPRINT_CFG_STR_POSTFIX, str);
}