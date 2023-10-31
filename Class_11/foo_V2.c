#include "foo_V2.h"
#include <stdio.h>
#include <string.h>

void foo(int *id, char *name)
{

    fprintf(stdout,"id atrašanas vieta atmiņā: %p\n",id);
    fprintf(stdout,"id vērtība: %d\n",*id);

    fprintf(stdout,"name atrašanas vieta atmiņā: %p\n",name);
    fprintf(stdout,"name vērtība: %s\n",name);

    *id = 50;
}
