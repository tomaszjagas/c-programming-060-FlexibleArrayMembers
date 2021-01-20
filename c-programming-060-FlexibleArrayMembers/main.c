#include <stdio.h>
#include <malloc.h>

struct s {
	int arraySize;
	int array[];
}; // end struct s

int main() {
	int desireSize = 5;
	struct s* ptr;

	ptr = malloc(sizeof(struct s) + desireSize * sizeof(int));

	return 0;
}