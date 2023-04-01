#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	FILE *fp;

	for (i = 1; i < argc; i++) {
		fp = fopen(argv[i], "w");
		fclose(fp);
	}
	return 0;
}
