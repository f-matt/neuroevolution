#include "processing-unit.h"

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    ProcessingUnit *p = processing_unit_new ();

    p->x1 = 0.2;
    p->x2 = 0.3;

    p->w1 = 1;
    p->w2 = 2;

    processing_unit_process (p);

    printf ("Result = %.2f\n", p->y);

    processing_unit_delete (p);

    return 0;
}

