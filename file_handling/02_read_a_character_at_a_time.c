#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int c;

	fp = fopen("example.txt", "r");
	if (fp == NULL) {
		printf("Error opening the file.\n");
		exit(1);
	}

	while ((c = fgetc(fp)) != EOF)
		printf("%c", c);

	fclose(fp);

	return 0;
}
