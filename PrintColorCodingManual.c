#include <stdio.h>
#include"ColorPairVariables.h"
#include"ColorPairFunctions.h"

void printTheManual()
{
	printf("\n25 Pair Color Coding Manual\n");
	printf("MajorColor MinorColor --> Pair Number\n");
	int pairNumber;
	for (pairNumber = 1; pairNumber <= 25; pairNumber++)
	{
		ColorPair colorPair = GetColorFromPairNumber(pairNumber);
		char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
		ColorPairToString(&colorPair, colorPairNames);
		printf("%s --> %d\n", colorPairNames, pairNumber);
	}
}
