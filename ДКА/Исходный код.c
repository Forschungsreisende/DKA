#include <conio.h>
#include <stdio.h>
#include <io.h> 
#include <stdlib.h> 

main()
{
	FILE *file = fopen("test1.csv", "r");
	int i = 0;
	if (file == NULL)
	{
		printf("Error");
	}
	else
	{
		char *perem [100];
		int i, x=7;
		for (i=0; i<x; i++)
		{
			fscanf(file, "%s", perem);
			printf("%s", perem);
		}
	}
getch();
return 0;
}