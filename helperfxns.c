/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;
/*incremeant up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}

/**
 *_strcpy-copy string src to dest.
 *@dest:destination string.
 *@src:source string.
 *
 *Return:returns pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int k = 0, p = 0;
/*determine the size of src string.*/
	while (*(src + p) != '\n')
	{
		p++;
	}
	for (k = 0; k < p; k++)
	{
		*(dest + k) = *(src + k);
	}

	return (dest);
}
