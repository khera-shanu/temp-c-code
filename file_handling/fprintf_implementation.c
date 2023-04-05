#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	char name[] = "Somnath";
	int age = 23;

	fp = fopen("output.txt", "w");
	if (fp == NULL) {
		printf("Error opening file.\n");
		exit(1);
	}

	fprintf(fp, "Name: %s\nAge: %d\n", name, age);

	fclose(fp);
	return 0;
}
