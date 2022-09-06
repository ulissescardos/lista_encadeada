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
		append_back(&ini, randint(1000));
	}

	printf("Tamanho da lista: %ld\n", get_size_of_list(&ini));
	show_list(&ini);

	for(int i = 0; i < 3; i++)
	{
		append_in_end(&ini, randint(1000));
	}

	printf("Tamanho da lista: %ld\n", get_size_of_list(&ini));
	show_list(&ini);

	for(int i = 0; i < 5; i++)
	{
		append_in_middle(&ini, randint(1000), 4);
	}

	printf("Tamanho da lista: %ld\n", get_size_of_list(&ini));
	show_list(&ini);

	long int val = 42;

	append_in_middle(&ini, val, 5);

	show_list(&ini);

	printf("index of %ld: %ld\n", val, get_index_of(&ini, 42));





	return 0;
}
