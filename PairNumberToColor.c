#include <stdio.h>
#include"ColorPairFunctions.h"
#include"ColorPairVariables.h"

ColorPair GetColorFromPairNumber(int pairNumber)
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}
