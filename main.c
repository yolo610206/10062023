#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "mapping.h"

int main(void)
{
	struct Map baseMap = populateMap();
	struct Route blueRoute = getBlueRoute();
	struct Map routeMap = addRoute(&baseMap, &blueRoute);

	printf("TESTTEST");
	printf("TESTTEST222");

	printMap(&routeMap, 1, 1);
	printf("hello world");
	return 0;
}

//YOUR CODE GOES HERE
