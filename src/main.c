#include "./linked_list/linked.h"
#include "./random_numbers/randint.h"

#include <stdio.h>

int main(const int argc, const char* argv[])
{
	printf("Number of args: %d\n", argc);
	printf("Args: ");

	for (int i = 0; i < argc; ++i)
	{
		printf(" %s",argv[i]);
	}
	puts("");

	printf("random number: %ld\n", randint(100));





	return 0;
}
