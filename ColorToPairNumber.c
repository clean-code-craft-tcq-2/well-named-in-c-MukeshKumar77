#include"ColorPairFunctions.h"
#include"ColorPairVariables.h"

int GetPairNumberFromColor(const ColorPair* colorPair)
{
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
