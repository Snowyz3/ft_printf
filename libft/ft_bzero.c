#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		*(char *)(s + counter) = '\0';
		counter++;
	}
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	int counter = 0;
	int size = 20;
	char str[50] = "aaaaaaaa testr test";
	char str2[50] = "aaaaaaaa testr test";
	//char str[50] = "";
	//char str2[50] = "";
	ft_bzero(str, 8);
	bzero(str2, 8);
	printf("Mine: ");
	while (counter < size)
		printf("%c", str[counter++]);
	counter = 0;
	printf("\nOriginal: ");
	while (counter < size)
		printf("%c", str2[counter++]);
}*/