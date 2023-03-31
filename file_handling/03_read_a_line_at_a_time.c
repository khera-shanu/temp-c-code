#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char s[4096];
	fp = fopen("multi_line_text.txt", "r");
	if (fp == NULL) {
		printf("Error opening the file.\n");
		exit(1);
	}
	printf("\n");

	while (fgets(s, sizeof(s), fp) != NULL)
		printf("%s", s);
	fclose(fp);
	
	printf("\n");

	return 0;
}
