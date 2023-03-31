#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	char c;
	FILE *fp;

	for (i = 1; i < argc; i++) {
		fp = fopen(argv[i], "r");

		if (fp == NULL) {
			printf("cat: %s: No such file or directory\n", argv[i]);
			continue;
		}

		while ((c = fgetc(fp)) != EOF)
			putchar(c);

		fclose(fp);
	}

	return 0;
}
