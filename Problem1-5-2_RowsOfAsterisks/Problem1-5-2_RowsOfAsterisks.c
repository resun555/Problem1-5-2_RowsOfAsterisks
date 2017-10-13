// Problem1-5-2_RowsOfAsterisks.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	int width;
	scanf("%d", &width);
	if (width < 0)
	{
		printf("Invalid input");
		exit(EOF);
	}
	int length;
	for (size_t i = 0; i < width; i++)
	{
		scanf("%d", &length);
		if (length < 0)
		{
			printf("Invalid input");
			exit(EOF);
		}
		for (size_t i = 0; i < length; i++)
		{
			printf("*");
		}
		if (i < width - 1)
		{
			printf("\n");
		}
	}
    return 0;
}

