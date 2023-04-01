#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	char c;
	FILE *fp;

	if (argc < 2) {
		printf("cat: missing file operand\n");
		exit(1);
	}

	for (i = 1; i < argc; i++) {
		fp = fopen(argv[i], "r");

		while ((c = fgetc(fp)) != EOF)
			putchar(c);

		fclose(fp);
	}

	return 0;
}
