#include <stdio.h>
#include <assert.h>
#include"ColorPairVariables.h"
#include"ColorPairFunctions.h"

int ColorCodeTestAndPrintManual()
{

    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printTheManual();

    return 0;
}
