#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenate two strings
 * @s1 - string for which another string is 
 * concatenated into
 * @s2 - string to be concatenated into s1
 * @n - size of s2 to be concatenated
 * Return : char 
 */
char *_memset(char *dest, char *src,unsigned int k)
{
        int i,len;
        for (i = 0; dest[i] != '\0'; i++)
        {
                len = i + 1;
        }
        for (i = 0; i <= k; i++)
        {
                dest[len + i] = src[i];
        }
        return (dest);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i,len,j,l;
	char *p,*u="",*outside;

	if (s1 == NULL)
		s1 = u;
	if (s2 == NULL)
		s2 = u;
	for (i = 0; s1[i] != '\0'; i++)
	{
		len = i + 1;
	}
	j = len + n;
	p = malloc(j * sizeof(char));

	if (p == NULL)
		return NULL;
	outside = _memset(s1, s2, n);

	for (i = 0; outside[i] != '\0'; i++)
	{
		p[i] = outside[i];
		l = i + 1;
	}
	s1[l] = '\0';
	return (s1);
}
