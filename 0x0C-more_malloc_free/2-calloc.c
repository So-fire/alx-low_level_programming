/**
 * *_memset - memory
 * @t: memory area
 * @a: char
 * @n: number
 *
 * Return: pointer to the memory area t
 */
char *_memset(char *t, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		t[i] = a;
	}

	return (t);
}

/**
 * *_calloc - memory for array
 * @nmemb: elements
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
