#include <unistd.h>
#include "holberton.h"
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; (*(s + i) != '\0'); i++)
	{
		count++;
	}
	return (count);
}
void _puts(char *s)
{
	int i;

	for (i = 0; (*(s + i) != '\0'); i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; (src[i]); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
int _atoi(char *s)
{
	return (write(1, &s, 1));
}
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; (src[i]); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; (*(dest + i)); i++)
	;
	for (j = 0; ((*(src + j)) && (j < n)); j++)
	{
		dest[i + j] += src[j];
	}
	dest[i + j] += '\0';
	return (dest);
}
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && (*(src + i)); i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int count = 0;

	while  ((s1[j] && s2[j]) && (s1[j] == s2[j]))
	{
		j++;
	}
	count = (s1[j] - s2[j]);
	return (count);
}
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if ((s[i] == c) && (c == '\0'))
	{
		return (s + i);
	}
	return (0);
}
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i]; i++)
	{
		if (count != i)
			break;

		for (j = 0; s[j]; j++)
		{
			if (s[i] == accept[j])
			count++;
		}
	}
	return (count);
}
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if ((needle[j] == '\0'))
		{
			return (haystack + i);
		}
	}
	return (0);
}
