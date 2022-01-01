#ifndef PROCESSING_UNIT_H
#define PROCESSING_UNIT_H

typedef enum { SUM = 1, SUB, MULT, DIV } OPERATION;

typedef struct {
    float x1;
    float x2;

    float w1;
    float w2;

    float y;

    OPERATION op;
} ProcessingUnit;

ProcessingUnit *processing_unit_new ();

void processing_unit_delete (ProcessingUnit *);

void processing_unit_process (ProcessingUnit *);

#endif

