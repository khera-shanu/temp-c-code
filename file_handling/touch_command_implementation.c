#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	FILE *fp;

	if (argc < 2) {
		printf("touch: missing file operand\n");
		exit(1);
	}

	for (i = 1; i < argc; i++) {
		fp = fopen(argv[i], "w");
		fclose(fp);
	}
	return 0;
}
