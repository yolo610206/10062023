#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "mapping.h"

//123324343443
//489374897328948932498837849723847829374982364782678

int main(void)
{
	struct Map baseMap = populateMap();
	struct Route blueRoute = getBlueRoute();
	struct Map routeMap = addRoute(&baseMap, &blueRoute);

	printf("TESTTEST");
	printf("TESTTEST222");

	printMap(&routeMap, 1, 1);

	return 0;
}

//YOUR CODE GOES HERE
