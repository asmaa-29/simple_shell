#include "shell.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length to check.
 *
 * Return: Integer length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    if (!s)
        return (0);

    for (; s[length]; length++)
        ;

    return (length);
}

/**
 * _strcpy - Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed by dest.
 * @dest: Pointer to the destination of the copied string.
 * @src: Pointer to the source of the string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
    size_t i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = '\0';
    return (dest);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, const char *src)
{
    char *destTemp = dest;
    const char *srcTemp = src;

    while (*destTemp != '\0')
        destTemp++;

    while (*srcTemp != '\0')
        *destTemp++ = *srcTemp++;

    *destTemp = '\0';
    return (dest);
}

/**
 * _strncat - Concatenates two strings, copying n bytes from source.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to copy from src.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
    size_t dest_len = _strlen(dest);
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    dest[dest_len + i] = '\0';

    return (dest);
}

/**
 * _strncmp - Compares two strings.
 * @s1: Pointer to a string.
 * @s2: Pointer to another string.
 * @n: The first n bytes of the strings to compare.
 *
 * Return: Less than 0 if s1 is shorter than s2.
 *         0 if s1 and s2 match.
 *         Greater than 0 if s1 is longer than s2.
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    for (i = 0; s1[i] && s2[i] && i < n; i++)
    {
        if (s1[i] > s2[i])
            return (s1[i] - s2[i]);
        else if (s1[i] < s2[i])
            return (s1[i] - s2[i]);
    }

    if (i == n)
        return (0);
    else
        return (-15);
}
