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

	node_t *ini;

	init_list(&ini);

	for(int i = 0; i < 3; i++)
	{
		append_back(&ini, randint(100));
	}

	printf("Tamanho da lista: %ld\n", get_size_of_list(&ini));

	for(int i = 0; i < 3; i++)
	{
		append_in_end(&ini, randint(100));
	}

	printf("Tamanho da lista: %ld\n", get_size_of_list(&ini));

	for(int i = 0; i < 5; i++)
	{
		append_in_middle(&ini, randint(100), 4);
	}

	printf("Tamanho da lista: %ld\n", get_size_of_list(&ini));





	return 0;
}
