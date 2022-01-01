#include "processing-unit.h"

#include <stdlib.h>

ProcessingUnit *processing_unit_new ()
{
    ProcessingUnit *processing_unit = malloc (sizeof (ProcessingUnit));
    
    processing_unit->x1 = 0;
    processing_unit->x2 = 0;
    processing_unit->w1 = 0;
    processing_unit->w2 = 0;
    processing_unit->y = 0;
    processing_unit->op = SUM;
}

void processing_unit_delete(ProcessingUnit *processing_unit)
{
    free (processing_unit);
}

void processing_unit_process(ProcessingUnit *processing_unit)
{
    switch (processing_unit->op) {
    case (SUM):
        processing_unit->y = processing_unit->x1 * processing_unit->w1 +
            processing_unit->x2 * processing_unit->w2;
        break;
    case (SUB):
        processing_unit->y = processing_unit->x1 * processing_unit->w1 -
            processing_unit->x2 * processing_unit->w2;
        break;
      case (MULT):
        processing_unit->y = processing_unit->x1 * processing_unit->w1 *
            processing_unit->x2 * processing_unit->w2;
        break;
       case (DIV):
        processing_unit->y = processing_unit->x1 * processing_unit->w1 /
            processing_unit->x2 * processing_unit->w2;
        break;
    }
}

